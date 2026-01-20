cmake_minimum_required(VERSION 3.31)
project(meanProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(mean
        DataSeries.cpp
        mean.cpp)
