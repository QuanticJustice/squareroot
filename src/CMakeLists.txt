cmake_minimum_required(VERSION 2.8)

message( "PROJECT_SOURCE_DIR points to " ${PROJECT_SOURCE_DIR})
message( "PROJECT_BINARY_DIR points to " ${PROJECT_BINARY_DIR})

message( "squareroot_SOURCE_DIR points to " ${PROJECT_SOURCE_DIR} )

# apparently required for CMake module that includes ExternalProject_Add functionality
include( ExternalProject )

ExternalProject_Add(
   project_prettyprint
   GIT_REPOSITORY https://github.com/QuanticJustice/prettyprint.git
   GIT_TAG master
)

# TODO: need to figure out how to pass env variable in so that GIT_TAG can point to specific version (tag)

# having INSTALL_COMMAND "" and BUILD_COMMAND "" effectively disables the BUILD and INSTALL steps

#include_directories("${PROJECT_SOURCE_DIR}/include"
#	"${PROJECT_SOURCE_DIR}/../prettyprint/include" )

#include_directories("${squareroot_SOURCE_DIR}/include"
#	"${squareroot_SOURCE_DIR}/../prettyprint/include")

# retrieve the SOURCE_DIR for the external project as it will be stored within
# the current build directory
ExternalProject_Get_Property( project_prettyprint SOURCE_DIR )
message( "project_prettyprint SOURCE_DIR retrieved as " ${SOURCE_DIR} )
set( PRETTY_PRINT_SOURCE_DIR ${SOURCE_DIR} )
message( "PRETTY_PRINT_SOURCE_DIR is " ${PRETTY_PRINT_SOURCE_DIR} )

# just need the include, there is no linking between libraries (i.e. this is not an application)
include_directories(
   ${PRETTY_PRINT_SOURCE_DIR}/inc
   ${PROJECT_SOURCE_DIR}/include
)

add_library( squareroot STATIC squareroot.c )

target_link_libraries( squareroot m )

add_dependencies( squareroot project_prettyprint )

# install the targets to specific directories
install( TARGETS squareroot DESTINATION ${PROJECT_SOURCE_DIR}/lib )
install( FILES ${PROJECT_SOURCE_DIR}/include/squareroot.h DESTINATION ${PROJECT_SOURCE_DIR}/inc )
