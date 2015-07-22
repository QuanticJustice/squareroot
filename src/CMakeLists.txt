cmake_minimum_required(VERSION 2.8)

message( "PROJECT_SOURCE_DIR points to " ${PROJECT_SOURCE_DIR})
message( "PROJECT_BINARY_DIR points to " ${PROJECT_BINARY_DIR})

message( "squareroot_SOURCE_DIR points to " ${squareroot_SOURCE_DIR} )

include_directories("${PROJECT_SOURCE_DIR}/include"
	"${PROJECT_SOURCE_DIR}/../prettyprint/include" )

link_directories("${PROJECT_SOURCE_DIR}/src" 
	"${PROJECT_SOURCE_DIR}/../prettyprint/lib" )

add_executable(squareroot squareroot.c test.c)

target_link_libraries(squareroot libprettyprint.a m)

install(TARGETS squareroot DESTINATION "${PROJECT_SOURCE_DIR}/bin")
