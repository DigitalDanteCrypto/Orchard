cmake_minimum_required(VERSION 3.23)
project(verger)

set(CMAKE_CXX_STANDARD 14)

add_executable(verger main.cpp Tree.cpp Tree.h Verger.cpp Verger.h Farmer.cpp Farmer.h AppleTree.cpp AppleTree.h CherryTree.cpp CherryTree.h PearTree.cpp PearTree.h)
