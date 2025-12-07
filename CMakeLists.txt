cmake_minimum_required(VERSION 4.2.0)

project(guessing_game)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
	src/main.cpp
)

add_executable(guessing_game ${SOURCES})
