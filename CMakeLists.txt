cmake_minimum_required(VERSION 2.8)
project( georec )
# The version number.
set (georec_VERSION_MAJOR 0)
set (georec_VERSION_MINOR 1)

set( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin )

# OpenCV
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

include_directories( ${PROJECT_SOURCE_DIR}/include )
add_subdirectory( ${PROJECT_SOURCE_DIR}/lib )
set (EXTRA_LIBS ${EXTRA_LIBS} libgeorec)

add_subdirectory( ${PROJECT_SOURCE_DIR}/src )
