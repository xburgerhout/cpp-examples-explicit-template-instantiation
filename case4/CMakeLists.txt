add_library(case4_lib SHARED
  myclass.h
  myclass.cpp
  demo.cpp
)

add_executable( case4_test main.cpp )
target_link_libraries( case4_test case4_lib )
