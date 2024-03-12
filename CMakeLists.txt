cmake_minimum_required(VERSION 3.5)

project(containerschiff LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(containerschiff main.cpp
    fahrt.h fahrt.cpp
    schiff.h schiff.cpp
    fahrtenbuch.h fahrtenbuch.cpp)

include(GNUInstallDirs)
install(TARGETS containerschiff
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
