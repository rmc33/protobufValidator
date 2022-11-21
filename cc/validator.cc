#include <iostream>
#include <string>
#include <google/protobuf/util/json_util.h>
#include "messages.pb.h"
#include "google/protobuf/message.h"
#include "absl/status/status.h"

using google::protobuf::util::JsonStringToMessage;
using namespace std;

int main(int argc, char* argv[]) {
    cout << "std=c++ version=" << __cplusplus << endl;

    const string test_msg = "{\"item\": []}";
    tutorial::MyMessageComponent message;
    absl::Status status = JsonStringToMessage(test_msg, &message);
    if (status.ok()) {
        cout << "parse ok" << endl;
    }
    else {
        cout << "Failed to parse msg from json: " << status.message() << endl;
    }
    return 0;
}

