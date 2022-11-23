import messages_pb2
from google.protobuf.json_format import ParseDict
from google.protobuf.json_format import MessageToDict
from google.protobuf.json_format import ParseError
import json

feed_file = open('myfile.json', 'r')
feed = json.load(feed_file)
errors = []
result = {'data':[]}

for index, entity in enumerate(feed['data']):
    try:
        message = ParseDict(entity, messages_pb2.MyMessageComponent())
        result['data'].append(MessageToDict(message, preserving_proto_field_name=True))
    except ParseError as err:
        errors.append('data[%d] error: %s' %(index,err))

if errors:
    print('Errors:\n','\n'.join(errors))
else:
    print('Result:\n',json.dumps(result))

    


