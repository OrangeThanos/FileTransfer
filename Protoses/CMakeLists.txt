
project(Protoses)

FILE(GLOB ProtoMessagess protos/*.proto)

get_target_property(grpc_cpp_plugin_location gRPC::grpc_cpp_plugin LOCATION) 

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${ProtoMessagess})

add_library(Protoses ${PROTO_SRCS} ${PROTO_HDRS})

protobuf_generate(TARGET Protoses LANGUAGE grpc 
  GENERATE_EXTENSIONS .grpc.pb.h .grpc.pb.cc 
  PROTOS ${ProtoMessagess}
  PLUGIN "protoc-gen-grpc=${grpc_cpp_plugin_location}" 
) 

target_link_libraries(Protoses protobuf::libprotobuf gRPC::grpc gRPC::grpc++ asio-grpc::asio-grpc)

