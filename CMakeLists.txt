cmake_minimum_required(VERSION 2.8)

message( "MAKEFLAGS is " $ENV{MAKEFLAGS} )
message( "SHELL is " $ENV{SHELL} )
message( "TESTVAR is " $ENV{TESTVAR} )

# so, TESTVAR works, have to put env vars in a csh script and then source the script before running
# cmake

#IF ( "$ENV{MAKEFLAGS}" STREQUAL "" )
#   message( "MAKEFLAGS is not defined (according to cmake)" )
#ENDIF ( "$ENV{MAKEFLAGS}" STREQUAL "" )

#SET( ENV{MAKEFLAGS} "" )

project(squareroot)
subdirs(src)
