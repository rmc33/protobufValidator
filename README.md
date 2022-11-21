# C++ & WebAssembly example

Example parsing JSON string to protobuf message.
Compiles to C++ binary or WebAssembly. Change messages.proto to protobuf definition needed.

1. Install [bazelisk](https://bazel.build/install/bazelisk)
2. Install emscripten [sdk](https://emscripten.org/docs/getting_started/downloads.html)
3. ``cd cc``
4. Run ``bazel build :validator`` to compile c++ binary
5. Run ``bazel build :wasm`` to compile to WebAssembly

# Python example parsing JSON string to protobuf message

Change messages.proto to protobuf definition needed. Update myfile.json with example JSON that will be parsed to
protobuf message.

1. Install [bazelisk](https://bazel.build/install/bazelisk)
2. ``cd python``
3. Run ``bazel run :validator`` to run python validator