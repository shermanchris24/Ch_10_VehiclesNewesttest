cmake_minimum_required(VERSION 3.12)
project(Ch_10_Vehicles)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ch_10_Vehicles main.cpp Vehicle.cpp Vehicle.h Person.cpp Person.h Truck.cpp Truck.h)