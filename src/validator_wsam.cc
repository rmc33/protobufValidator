#include <emscripten/bind.h>

#include "messageComponent.h"

using namespace emscripten;
using namespace Validator;

EMSCRIPTEN_BINDINGS(Validator) {
    emscripten::class_<MessageComponent>("MessageComponent")
        .constructor<>()
        .class_function("Validate", &MessageComponent::Validate);
}