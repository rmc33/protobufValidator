#include <iostream>
#include <string>
#include <google/protobuf/util/json_util.h>
#include "messages.pb.h"
#include "absl/status/status.h"
#include "messageComponent.h"

namespace Validator  {
using google::protobuf::util::JsonStringToMessage;
using google::protobuf::util::MessageToJsonString;
using google::protobuf::util::JsonPrintOptions;

    std::string MessageComponent::Validate(const std::string &test_msg) {
        tutorial::MyMessageComponent m;
        absl::Status status = google::protobuf::util::JsonStringToMessage(test_msg, &m);
        if (status.ok()) {
            std::string content;
            if (MessageToJsonString(m, &content, JsonPrintOptions{}).ok()) {
                return content;
            }
        }
        return absl::StrCat("error", status.message());
    }

} // namespace Validator

