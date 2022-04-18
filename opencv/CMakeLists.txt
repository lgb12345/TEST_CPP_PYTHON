cmake_minimum_required(VERSION 2.8)
project( cv )

find_package( OpenCV REQUIRED )
add_executable( cv pic.cpp )
target_link_libraries( cv ${OpenCV_LIBS} )
