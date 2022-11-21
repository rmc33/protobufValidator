load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_google_googletest",
    sha256 = "ea54c9845568cb31c03f2eddc7a40f7f83912d04ab977ff50ec33278119548dd",
    strip_prefix = "googletest-4c9a3bb62bf3ba1f1010bf96f9c8ed767b363774",
    urls = [
        "https://github.com/google/googletest/archive/4c9a3bb62bf3ba1f1010bf96f9c8ed767b363774.tar.gz",
    ],
)

ABSL_COMMIT = "44bb804570f1efc9d72f503149e512719a8e4441"  # master
http_archive(
    name = "com_google_absl",
    urls = ["https://github.com/abseil/abseil-cpp/archive/%s.zip" % ABSL_COMMIT],
    strip_prefix = "abseil-cpp-%s" % ABSL_COMMIT,
)

http_archive(
    name = "bazel_skylib",
    urls = ["https://github.com/bazelbuild/bazel-skylib/releases/download/1.2.1/bazel-skylib-1.2.1.tar.gz"],
    sha256 = "f7be3474d42aae265405a592bb7da8e171919d74c16f082a5457840f06054728",
)

http_archive(
    name = "emsdk",
    strip_prefix = "emsdk-3891e7b04bf8cbb3bc62758e9c575ae096a9a518/bazel",
    url = "https://github.com/emscripten-core/emsdk/archive/3891e7b04bf8cbb3bc62758e9c575ae096a9a518.tar.gz",
    sha256 = "d55e3c73fc4f8d1fecb7aabe548de86bdb55080fe6b12ce593d63b8bade54567",
)

load("@emsdk//:deps.bzl", emsdk_deps = "deps")
emsdk_deps()

load("@emsdk//:emscripten_deps.bzl", emsdk_emscripten_deps = "emscripten_deps")
emsdk_emscripten_deps()

http_archive(
    name = "com_google_protobuf",
    strip_prefix = "protobuf-main",
    urls = ["https://github.com/protocolbuffers/protobuf/archive/main.zip"],
)

# http_archive(
#    name = "com_google_protobuf",
#    sha256 = "c29d8b4b79389463c546f98b15aa4391d4ed7ec459340c47bffe15db63eb9126",
#    strip_prefix = "protobuf-3.21.3",
#    urls = ["https://github.com/protocolbuffers/protobuf/archive/v3.21.3.tar.gz"],
#)

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")
protobuf_deps()