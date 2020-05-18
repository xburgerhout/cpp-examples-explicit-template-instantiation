add_library(case5_lib SHARED
  myclass.h
  myclass.hpp
  myclass.cpp
  demo.cpp
)

add_executable( case5_test main.cpp )
target_link_libraries( case5_test case5_lib )
