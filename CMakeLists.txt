cmake_minimum_required(VERSION 3.15)
project(Morpino)

set(CMAKE_CXX_STANDARD 17)

add_executable(Morpino Source/main.cpp Source/Pion/Pion.cpp Source/Pion/Pion.h Source/Case/Case.cpp Source/Case/Case.h Source/Terrain/Terrain.cpp Source/Terrain/Terrain.h Source/Test/Test.cpp Source/Test/Test.h)