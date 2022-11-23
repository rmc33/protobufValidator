# C++ & WebAssembly example

Example parsing JSON string to protobuf message.
Compiles to C++ binary or WebAssembly. Change messages.proto to protobuf definition needed.

1. Install [bazel](https://bazel.build/install)
3. ``cd cc``
4. Run ``bazel build :validator`` to compile c++ binary and ``./bazel-bin/validator`` to run
5. Run ``bazel build :wasm`` to compile to WebAssembly and open validator.html to run

# Python example parsing JSON string to protobuf message

Change messages.proto to protobuf definition needed. Update myfile.json with example JSON that will be parsed to
protobuf message.

1. Install [bazel](https://bazel.build/install)
2. ``cd python``
3. Run ``bazel run :validator`` to run python validator
4. Or Run ``bazel build :validator`` to compile and ``./bazel-bin/validator`` to run