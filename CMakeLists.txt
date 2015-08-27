cmake_minimum_required(VERSION 2.8)

#message( "MAKEFLAGS is $ENV{MAKEFLAGS}" )

#IF ( "$ENV{MAKEFLAGS}" STREQUAL "" )
#   message( "MAKEFLAGS is not defined (according to cmake)" )
#ENDIF ( "$ENV{MAKEFLAGS}" STREQUAL "" )

#SET( ENV{MAKEFLAGS} "" )

project(squareroot)
subdirs(src)
