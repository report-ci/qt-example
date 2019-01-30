project(qtest-example)
cmake_minimum_required(VERSION 3.8)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 14)
set(BUILD_SHARED_LIBS ON CACHE BOOL "Building shared libs, override for JsonCpp")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/install)

#orkaround so the generate ui_*.h can be included by dependant targets.
function(target_public_include_autogen TARGET)
    target_include_directories(${TARGET} PUBLIC ${CMAKE_CURRENT_BINARY_DIR}/${TARGET}_autogen/include)
endfunction(target_public_include_autogen)

find_package(Qt5 CONFIG REQUIRED Test)

add_subdirectory(test)