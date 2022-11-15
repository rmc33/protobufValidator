#include <iostream>
#include <string>
#include <google/protobuf/util/json_util.h>
#include "messages.pb.h"
#include "absl/status/status.h"
#include "messageComponent.h"

namespace Validator  {

    std::string MessageComponent::Validate(const std::string &test_msg) {
        tutorial::MyMessageComponent m;
        google::protobuf::Message* message = dynamic_cast<google::protobuf::Message*>(&m);
        absl::Status status = google::protobuf::util::JsonStringToMessage(test_msg, message);
        return absl::StrCat("", status.message());
    }

} // namespace Validator

