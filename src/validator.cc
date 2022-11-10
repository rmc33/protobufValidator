#include <iostream>
#include <string>
#include <google/protobuf/util/json_util.h>
#include "messages.pb.h"


using google::protobuf::util::JsonStringToMessage;
using namespace std;

int main(int argc, char* argv[]) {

    const string test_msg = "{\"item\":[]}";
    tutorial::MyMessageComponent message;
    google::protobuf::util::Status status = JsonStringToMessage(test_msg, &message);
    if (status.ok()) {
        cout << "parse ok" << endl;
    }
    else {
        std::string result;
        status.message().CopyToString(&result);
        cout << "Failed to parse msg from json: " << result << endl;
    }
    return 0;
}

