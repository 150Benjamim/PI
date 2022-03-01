cmake_minimum_required(VERSION 3.19)
project(ficha8 C)

set(CMAKE_C_STANDARD 99)

add_executable(ficha8 main.c Stack.c Stack.h Queue.c Queue.h Deque.c Deque.h)