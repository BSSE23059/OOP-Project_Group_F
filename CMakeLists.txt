cmake_minimum_required(VERSION 3.26)
project(OOP_Project_Group_F)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(OOP_Project_Group_F
        Person.cpp
        Person.h
        Voter.cpp
        Voter.h)
