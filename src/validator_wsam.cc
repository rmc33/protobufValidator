#include <emscripten/bind.h>
#include "messageComponent.h"

using namespace emscripten;
using namespace Validator;

EMSCRIPTEN_BINDINGS(Validator) {

    value_object<Response>("ValidatorResponse")
        .field("entityJson", &Response::entityJson)
        .field("errorMessage", &Response::errorMessage);

    emscripten::class_<MessageComponent>("MessageComponent")
        .constructor<>()
        .class_function("Validate", &MessageComponent::Validate);
}