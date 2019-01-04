cmake_minimum_required (VERSION 2.6)
project (RMDev_Host)

find_path(LIBUSB_INCLUDE_DIR
  NAMES libusb.h
  PATH_SUFFIXES "include" "libusb" "libusb-1.0")
  
add_executable (host main.cpp)

include_directories(host
    ${LIBUSB_INCLUDE_DIR}
)

target_link_libraries(host
    -lusb-1.0
)