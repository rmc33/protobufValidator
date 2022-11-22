load("@com_google_protobuf//:protobuf.bzl", "py_proto_library")

py_proto_library(
    name = "py_proto_library",
    srcs = ["messages.proto"],
    visibility = ["//visibility:public"],
)

py_binary(
  name = "validator",
  srcs = ["validator.py"],
  deps = [":py_proto_library"],
  data = [":examples_data"]
)

filegroup(
    name = "examples_data",
    srcs = glob(['*.json'])
)
