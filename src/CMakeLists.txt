cmake_minimum_required(VERSION 3.22)

project(ExperimentingWithBinUtils)

add_library(shared SHARED
            shared_library.cpp)

add_library(static STATIC
            static_library.cpp)

target_link_libraries(static
                      PRIVATE
                      shared)

add_executable(executable
               main.cpp)

target_link_libraries(executable
                      PRIVATE
                      static)
