cmake_minimum_required(VERSION 2.8)

message( "PROJECT_SOURCE_DIR points to " ${PROJECT_SOURCE_DIR})
message( "PROJECT_BINARY_DIR points to " ${PROJECT_BINARY_DIR})

message( "squareroot_SOURCE_DIR points to " ${squareroot_SOURCE_DIR} )

#include_directories("${PROJECT_SOURCE_DIR}/include"
#	"${PROJECT_SOURCE_DIR}/../prettyprint/include" )

include_directories("${squareroot_SOURCE_DIR}/include"
	"${squareroot_SOURCE_DIR}/../prettyprint/include")

add_library(squareroot STATIC squareroot.c)

install(TARGETS squareroot DESTINATION ${PROJECT_SOURCE_DIR}/lib)
