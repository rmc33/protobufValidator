#include <iostream>
#include <string>
#include <google/protobuf/util/json_util.h>
#include "messages.pb.h"

#include "messageComponent.h"

namespace Validator  {

    std::string MessageComponent::Validate(const std::string &test_msg) {
        tutorial::MyMessageComponent message;
        google::protobuf::util::Status status = google::protobuf::util::JsonStringToMessage(test_msg, &message);
        std::string result;
        status.message().CopyToString(&result);
        return result;
    }

} // namespace Validator

