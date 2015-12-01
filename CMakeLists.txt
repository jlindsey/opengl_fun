cmake_minimum_required(VERSION 3.4.0)
project(gl CXX)

# Use C++11 or 0x where applicable
include(CheckCXXCompilerFlag)
check_cxx_compiler_flag("-std=c++11" COMPILER_SUPPORTS_CXX11)
check_cxx_compiler_flag("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
	message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

# Vendor libs
add_subdirectory(vendor/glfw)
include_directories(vendor/glfw/include)
include_directories(vendor/easyloggingpp/src)

# Squelch annoying Apple deprecation warnings in GLFW
target_compile_options(glfw PRIVATE "-Wno-deprecated")

add_executable(gl src/main.cpp src/game.cpp src/cube.cpp)
target_link_libraries(gl glfw ${GLFW_LIBRARIES})

