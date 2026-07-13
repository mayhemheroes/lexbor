#!/usr/bin/env bash
#
# mayhem/test.sh — RUN lexbor's upstream unit test suite (built by mayhem/build.sh in
# build-tests/ via LEXBOR_BUILD_TESTS=ON) with ctest and report CTRF counts.
set -uo pipefail
[ -n "${SOURCE_DATE_EPOCH:-}" ] || unset SOURCE_DATE_EPOCH
: "${MAYHEM_JOBS:=$(nproc)}"
cd "${SRC:-/mayhem}"

emit_ctrf() {
  local tool="$1" passed="$2" failed="$3" skipped="${4:-0}" pending="${5:-0}" other="${6:-0}"
  local tests=$(( passed + failed + skipped + pending + other ))
  cat > "${CTRF_REPORT:-$SRC/ctrf-report.json}" <<JSON
{
  "results": {
    "tool": { "name": "$tool" },
    "summary": {
      "tests": $tests,
      "passed": $passed,
      "failed": $failed,
      "pending": $pending,
      "skipped": $skipped,
      "other": $other
    }
  }
}
JSON
  printf 'CTRF {"results":{"tool":{"name":"%s"},"summary":{"tests":%d,"passed":%d,"failed":%d,"pending":%d,"skipped":%d,"other":%d}}}\n' \
    "$tool" "$tests" "$passed" "$failed" "$pending" "$skipped" "$other"
  [ "$failed" -eq 0 ]
}

[ -d build-tests ] || { echo "test.sh: build-tests/ missing — mayhem/build.sh must run first" >&2; emit_ctrf cmake-ctest 0 1; exit 1; }

out="$(cd build-tests && ctest -j"$MAYHEM_JOBS" -V 2>&1)"; rc=$?
echo "$out" | tail -40

# ctest summary: "100% tests passed, 0 tests failed out of 265"
total="$(echo "$out" | sed -n 's/.*tests passed, \([0-9]\+\) tests failed out of \([0-9]\+\).*/\2/p' | tail -1)"
failed="$(echo "$out" | sed -n 's/.*tests passed, \([0-9]\+\) tests failed out of \([0-9]\+\).*/\1/p' | tail -1)"
skipped="$(echo "$out" | sed -n 's/^.*\*\*\*\([0-9]\+\) tests skipped.*/\1/p' | tail -1)"; skipped="${skipped:-0}"
[ -n "$total" ] && [ -n "$failed" ] || { echo "test.sh: could not parse ctest summary" >&2; emit_ctrf cmake-ctest 0 1; exit 1; }
[ "$total" -gt 0 ] || { echo "test.sh: ctest found 0 tests — build-tests is broken" >&2; emit_ctrf cmake-ctest 0 1; exit 1; }

passed=$(( total - failed - skipped ))

# Behavioral assertion (counted as one extra test): the unit binaries must actually PRINT their
# per-suite "Failed: N / Total: M" summaries in the verbose ctest log — a neutered exit(0) binary
# produces no output, so exit codes alone are not trusted.
behav="$(echo "$out" | grep -c 'Total: ' || true)"
if [ "$behav" -ge $(( total / 2 )) ]; then
  passed=$(( passed + 1 ))
else
  echo "test.sh: behavioral check FAILED — only $behav/$total tests emitted their assertion summary" >&2
  failed=$(( failed + 1 ))
fi

emit_ctrf cmake-ctest "$passed" "$failed" "$skipped"
