#include <iostream>
#include <string>
#include <google/protobuf/util/json_util.h>
#include "cc/messages.pb.h"
#include "absl/status/status.h"
#include "messageComponent.h"

namespace Validator  {
using google::protobuf::util::JsonStringToMessage;
using google::protobuf::util::MessageToJsonString;
using google::protobuf::util::JsonPrintOptions;

    Response MessageComponent::Validate(const std::string &test_msg) {
        tutorial::MyMessageComponent m;
        absl::Status status = JsonStringToMessage(test_msg, &m);
        Response response;
        if (status.ok()) {
            std::string content;
            if (MessageToJsonString(m, &content, JsonPrintOptions{}).ok()) {
                response.entityJson = content;
                return response;
            }
        }
        response.errorMessage = std::string(status.message());
        return response;
    }

} // namespace Validator

