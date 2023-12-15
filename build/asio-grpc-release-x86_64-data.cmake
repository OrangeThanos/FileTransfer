########### AGGREGATED COMPONENTS AND DEPENDENCIES FOR THE MULTI CONFIG #####################
#############################################################################################

set(asio-grpc_COMPONENT_NAMES "")
list(APPEND asio-grpc_FIND_DEPENDENCY_NAMES Boost gRPC)
list(REMOVE_DUPLICATES asio-grpc_FIND_DEPENDENCY_NAMES)
set(Boost_FIND_MODE "NO_MODULE")
set(gRPC_FIND_MODE "NO_MODULE")

########### VARIABLES #######################################################################
#############################################################################################
set(asio-grpc_PACKAGE_FOLDER_RELEASE "/home/stanislau/.conan2/p/asio-2694f95221b1c/p")
set(asio-grpc_BUILD_MODULES_PATHS_RELEASE "${asio-grpc_PACKAGE_FOLDER_RELEASE}/lib/cmake/asio-grpc/AsioGrpcProtobufGenerator.cmake")


set(asio-grpc_INCLUDE_DIRS_RELEASE "${asio-grpc_PACKAGE_FOLDER_RELEASE}/include")
set(asio-grpc_RES_DIRS_RELEASE )
set(asio-grpc_DEFINITIONS_RELEASE "-DAGRPC_BOOST_ASIO")
set(asio-grpc_SHARED_LINK_FLAGS_RELEASE )
set(asio-grpc_EXE_LINK_FLAGS_RELEASE )
set(asio-grpc_OBJECTS_RELEASE )
set(asio-grpc_COMPILE_DEFINITIONS_RELEASE "AGRPC_BOOST_ASIO")
set(asio-grpc_COMPILE_OPTIONS_C_RELEASE )
set(asio-grpc_COMPILE_OPTIONS_CXX_RELEASE )
set(asio-grpc_LIB_DIRS_RELEASE )
set(asio-grpc_BIN_DIRS_RELEASE )
set(asio-grpc_LIBRARY_TYPE_RELEASE UNKNOWN)
set(asio-grpc_IS_HOST_WINDOWS_RELEASE 0)
set(asio-grpc_LIBS_RELEASE )
set(asio-grpc_SYSTEM_LIBS_RELEASE )
set(asio-grpc_FRAMEWORK_DIRS_RELEASE )
set(asio-grpc_FRAMEWORKS_RELEASE )
set(asio-grpc_BUILD_DIRS_RELEASE )
set(asio-grpc_NO_SONAME_MODE_RELEASE FALSE)


# COMPOUND VARIABLES
set(asio-grpc_COMPILE_OPTIONS_RELEASE
    "$<$<COMPILE_LANGUAGE:CXX>:${asio-grpc_COMPILE_OPTIONS_CXX_RELEASE}>"
    "$<$<COMPILE_LANGUAGE:C>:${asio-grpc_COMPILE_OPTIONS_C_RELEASE}>")
set(asio-grpc_LINKER_FLAGS_RELEASE
    "$<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,SHARED_LIBRARY>:${asio-grpc_SHARED_LINK_FLAGS_RELEASE}>"
    "$<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,MODULE_LIBRARY>:${asio-grpc_SHARED_LINK_FLAGS_RELEASE}>"
    "$<$<STREQUAL:$<TARGET_PROPERTY:TYPE>,EXECUTABLE>:${asio-grpc_EXE_LINK_FLAGS_RELEASE}>")


set(asio-grpc_COMPONENTS_RELEASE )