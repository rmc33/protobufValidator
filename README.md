Example validating JSON string with proto schema.
Compiles to C++ binary or WebAssembly

1. Install [bazelisk](https://bazel.build/install/bazelisk)
2. Install emscripten [sdk](https://emscripten.org/docs/getting_started/downloads.html)
3. Run ``bazel build :validator`` to compile c++ binary
4. Run ``bazel build :hello-world-js`` to compile to WebAssembly

