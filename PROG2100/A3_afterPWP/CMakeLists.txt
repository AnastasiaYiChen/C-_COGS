cmake_minimum_required(VERSION 3.17)
project(M09_AliceChess)

set(CMAKE_CXX_STANDARD 11)

add_executable(M09_AliceChess main.cpp Piece.cpp Piece.h Ninja.cpp Ninja.h Rook.cpp Rook.h Board.h Board.cpp)