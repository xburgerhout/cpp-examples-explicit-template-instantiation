cmake_minimum_required(VERSION 3.5)

project(extern_templates LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory( case0 )
add_subdirectory( case1 )
add_subdirectory( case2 )
add_subdirectory( case3 )
if ( LINUX )
add_subdirectory( case4 )
add_subdirectory( case5 )
endif()

if ( WIN32 )
  add_subdirectory( win )
endif()
