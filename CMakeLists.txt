cmake_minimum_required (VERSION 3.15  )
project (Server)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


if(MSVC)
  add_compile_options(PRIVATE /W4 /WX)
else()
  add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

find_package(Boost COMPONENTS program_options regex system REQUIRED)
find_package(Protobuf REQUIRED CONFIG) 

FILE(GLOB ProtoMessagess protos/*.proto)


protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${ProtoMessagess})

add_executable(Server Main.cpp ${PROTO_SRCS} ${PROTO_HDRS})

message("Building with CMake version: ${CMAKE_VERSION}")
message("Boost include dirs: ${Boost_INCLUDE_DIRS}")
message("Boost libs: ${Boost_LIBRARIES}")

include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_BINARY_DIR})
include_directories(${Boost_INCLUDE_DIRS})


target_link_libraries(Server ${Boost_LIBRARIES} protobuf::libprotobuf)