
project (Client)

add_executable(Client Client.cpp)
target_link_libraries(Client ${Boost_LIBRARIES} Protoses)