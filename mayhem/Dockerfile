# Build Stage
FROM --platform=linux/amd64 ubuntu:20.04 as builder

RUN apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get install -y cmake clang

ADD . /lexbor
WORKDIR /lexbor

RUN mkdir build
WORKDIR build

RUN CC=clang CXX=clang++ cmake -DLEXBOR_BUILD_TESTS=ON -DLEXBOR_BUILD_WITH_FUZZER=ON -DLEXBOR_BUILD_WITH_ASAN=ON LEXBOR_BUILD_EXAMPLES=ON -DLEXBOR_BUILD_SHARED=OFF -DDLEXBOR_BUILD_STATIC=ON ..
RUN make -j$(nproc) fuzz_lexbor_css_syntax_test_fuzzers_lexbor_css_syntax_tokenizer  \
    fuzz_lexbor_encoding_test_fuzzers_lexbor_encoding_decode  \
    fuzz_lexbor_html_test_fuzzers_lexbor_html_document_parse

RUN mkdir fuzz_binaries && find test/fuzzers/lexbor/ -executable -type f | xargs cp -t fuzz_binaries

# Package Stage
FROM --platform=linux/amd64 ubuntu:20.04

## TODO: Change <Path in Builder Stage>
COPY --from=builder /lexbor/build/fuzz_binaries  /fuzz_binaries/