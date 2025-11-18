#!/bin/bash
set -euo pipefail

# RLENV Build Script
# This script rebuilds the application from source located at /rlenv/source/lexbor/
#
# Original image: ghcr.io/mayhemheroes/lexbor:master
# Git revision: 6a0571986cca5ee0647648d0877973d0e35521e6

# ============================================================================
# Environment Variables
# ============================================================================
export CC=clang
export CXX=clang++

# ============================================================================
# REQUIRED: Change to Source Directory
# ============================================================================
cd /rlenv/source/lexbor

# ============================================================================
# Clean Previous Build (recommended)
# ============================================================================
rm -rf build/
rm -f /fuzz_binaries/tokenizer
rm -f /fuzz_binaries/decode
rm -f /fuzz_binaries/document_parse

# ============================================================================
# Build Commands (NO NETWORK, NO PACKAGE INSTALLATION)
# ============================================================================
# Create build directory
mkdir -p build
cd build

# Configure with CMake
CC=clang CXX=clang++ cmake \
    -DLEXBOR_BUILD_TESTS=ON \
    -DLEXBOR_BUILD_WITH_FUZZER=ON \
    -DLEXBOR_BUILD_WITH_ASAN=ON \
    -DLEXBOR_BUILD_EXAMPLES=ON \
    -DLEXBOR_BUILD_SHARED=OFF \
    -DLEXBOR_BUILD_STATIC=ON \
    ..

# Build the fuzz targets
make -j1 \
    fuzz_lexbor_css_syntax_test_fuzzers_lexbor_css_syntax_tokenizer \
    fuzz_lexbor_encoding_test_fuzzers_lexbor_encoding_decode \
    fuzz_lexbor_html_test_fuzzers_lexbor_html_document_parse

# ============================================================================
# Copy Artifacts (use 'cat >' for busybox compatibility)
# ============================================================================
# Ensure target directory exists
mkdir -p /fuzz_binaries

# Find and copy the built fuzzer binaries
find test/fuzzers/lexbor/ -executable -type f -exec sh -c '
    for file; do
        basename=$(basename "$file")
        cat "$file" > "/fuzz_binaries/$basename"
    done
' sh {} +

# ============================================================================
# Set Permissions
# ============================================================================
chmod 777 /fuzz_binaries/tokenizer 2>/dev/null || true
chmod 777 /fuzz_binaries/decode 2>/dev/null || true
chmod 777 /fuzz_binaries/document_parse 2>/dev/null || true

# ============================================================================
# REQUIRED: Verify Build Succeeded
# ============================================================================
if [ ! -f /fuzz_binaries/tokenizer ]; then
    echo "Error: Build artifact not found at /fuzz_binaries/tokenizer"
    exit 1
fi

# Verify executable bit
if [ ! -x /fuzz_binaries/tokenizer ]; then
    echo "Warning: Build artifact is not executable, setting permissions..."
    chmod +x /fuzz_binaries/tokenizer
fi

# Verify file size
SIZE=$(stat -c%s /fuzz_binaries/tokenizer 2>/dev/null || stat -f%z /fuzz_binaries/tokenizer 2>/dev/null || echo 0)
if [ "$SIZE" -lt 1000 ]; then
    echo "Warning: Build artifact is suspiciously small ($SIZE bytes)"
fi

echo "Build completed successfully: /fuzz_binaries/tokenizer"
