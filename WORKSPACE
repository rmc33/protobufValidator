load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

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
    sha256 = "c29d8b4b79389463c546f98b15aa4391d4ed7ec459340c47bffe15db63eb9126",
    strip_prefix = "protobuf-3.21.3",
    urls = ["https://github.com/protocolbuffers/protobuf/archive/v3.21.3.tar.gz"],
)

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")

protobuf_deps()