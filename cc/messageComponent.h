#ifndef LIB_MSG_COMPONENT_H_
#define LIB_MSG_COMPONENT_H_

#include <string>

namespace Validator {

    struct Response {
        std::string errorMessage;
        std::string entityJson;
    };

    class MessageComponent {
        public:
        static Response Validate(const std::string &test_msg);
    };

} // namespace Validator

#endif