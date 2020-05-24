add_library(win_myclass SHARED
  myclass.h
  myclass.hpp
  myclass.cpp
  demo.cpp
)
target_compile_definitions( win_myclass PRIVATE MC_EXPORTS )

add_executable( win_test main.cpp )
target_link_libraries( win_test win_myclass )
