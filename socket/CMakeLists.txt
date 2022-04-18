cmake_minimum_required(VERSION 3.5) 
project(device)
find_package( OpenCV REQUIRED )

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR arm)

set(tools /mnt/hgfs/share/external-toolchain-v5/gcc-linaro-5.3.1-arm)
set(CMAKE_C_COMPILER ${tools}/bin/arm-linux-gnueabi-gcc)
set(CMAKE_CXX_COMPILER ${tools}/bin/arm-linux-gnueabi-g++)

add_executable(device device.cpp)