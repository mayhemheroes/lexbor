#!/usr/bin/env bash
#
# mayhem/build.sh — build the lexbor fuzz targets + the upstream test suite.
#
#   build/tokenizer(-standalone)       sanitized + libFuzzer  -> target `css-tokenizer`
#   build/decode(-standalone)          sanitized + libFuzzer  -> target `encoding-decode`
#   build/document_parse(-standalone)  sanitized + libFuzzer  -> target `html-document-parse`
#   build-tests/                       normal flags           -> upstream ctest unit suite
#
# The three harnesses are upstream's own fuzzers (test/fuzzers/lexbor/...), linked against a
# sanitized static liblexbor so ASan/UBSan instrument the library itself. The test build is a
# separate clean cmake tree (LEXBOR_BUILD_TESTS=ON) that mayhem/test.sh runs with ctest.
set -euo pipefail

[ -n "${SOURCE_DATE_EPOCH:-}" ] || unset SOURCE_DATE_EPOCH

: "${SANITIZER_FLAGS=-fsanitize=address,undefined -fno-sanitize-recover=all -fno-omit-frame-pointer}"
: "${DEBUG_FLAGS:=-g -gdwarf-3}"
: "${CC:=clang}" ; : "${CXX:=clang++}"
: "${LIB_FUZZING_ENGINE:=-fsanitize=fuzzer}"
: "${MAYHEM_JOBS:=$(nproc)}"
: "${COVERAGE_FLAGS=}"
export SANITIZER_FLAGS DEBUG_FLAGS CC CXX LIB_FUZZING_ENGINE MAYHEM_JOBS COVERAGE_FLAGS

cd "${SRC:-/mayhem}"

# 1) Sanitized static library (the fuzzed code must be instrumented, not just the harness).
cmake -B build-fuzz \
      -DCMAKE_C_COMPILER="$CC" \
      -DCMAKE_C_FLAGS="$SANITIZER_FLAGS $DEBUG_FLAGS" \
      -DLEXBOR_BUILD_SHARED=OFF -DLEXBOR_BUILD_STATIC=ON .
cmake --build build-fuzz -j"$MAYHEM_JOBS"

LIB="build-fuzz/liblexbor_static.a"
INC="-I source"
DEFS="-DLEXBOR_STATIC -DLEXBOR_HAVE_FUZZER"

mkdir -p build

# 2) Each harness twice: libFuzzer binary + a standalone run-once reproducer.
declare -A HARNESS=(
  [tokenizer]="test/fuzzers/lexbor/css/syntax/tokenizer.c"
  [decode]="test/fuzzers/lexbor/encoding/decode.c"
  [document_parse]="test/fuzzers/lexbor/html/document_parse.c"
)

pids=()
for name in "${!HARNESS[@]}"; do
  src="${HARNESS[$name]}"
  # shellcheck disable=SC2086
  $CC $SANITIZER_FLAGS $DEBUG_FLAGS $LIB_FUZZING_ENGINE $DEFS $INC "$src" "$LIB" \
      -o "build/$name" & pids+=($!)
  # shellcheck disable=SC2086
  $CC $SANITIZER_FLAGS $DEBUG_FLAGS "$STANDALONE_FUZZ_MAIN" $DEFS $INC "$src" "$LIB" \
      -o "build/$name-standalone" & pids+=($!)
done
rc=0; for p in "${pids[@]}"; do wait "$p" || rc=1; done
[ "$rc" -eq 0 ] || { echo "build.sh: a harness failed to build" >&2; exit 1; }

# 3) Upstream test suite, NORMAL flags, in its own clean tree — mayhem/test.sh only RUNS it.
cmake -B build-tests \
      -DCMAKE_C_COMPILER="$CC" \
      -DCMAKE_BUILD_TYPE=Release \
      -DCMAKE_C_FLAGS="$COVERAGE_FLAGS" \
      -DLEXBOR_BUILD_TESTS=ON \
      -DLEXBOR_BUILD_SHARED=OFF -DLEXBOR_BUILD_STATIC=ON .
cmake --build build-tests -j"$MAYHEM_JOBS"

echo "build.sh: built build/{tokenizer,decode,document_parse}(+-standalone) and build-tests/ suite"
