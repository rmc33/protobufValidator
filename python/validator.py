from messages_pb2 import MyMessageComponent
from google.protobuf.json_format import ParseDict, MessageToDict, ParseError
import json

feed_file = open('/Users/rc/protobufValidator/python/myfile.json', 'r')
feed = json.load(feed_file)
errors = []
result = {"data":[]}

for index, entity in enumerate(feed["data"]):
    try:
        message: MyMessageComponent = ParseDict(entity, MyMessageComponent())
        result["data"].append(MessageToDict(message, preserving_proto_field_name=True))
    except ParseError as err:
        errors.append("data[%d] error: %s \n" %(index,err))

if len(errors):
    print("Errors:\n"+"".join(errors))
else:
    print("Result:\n"+json.dumps(result))

    


