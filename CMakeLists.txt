cmake_minimum_required(VERSION 3.14)

project(add_number)

add_library(add_number src/add_five.c)
target_include_directories(add_number PUBLIC src)

add_subdirectory(test)