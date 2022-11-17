cmake_minimum_required(VERSION 3.10)

project(mysteries_from_above)
include_directories(include SDL2/include)
add_executable(mysteries_from_above mso.cpp)
target_link_libraries(mysteries_from_above -Lmingw32 -LSDL2/lib/SDL2 -LSDL2/lib/SDL2main)