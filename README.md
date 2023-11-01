# Simple Shared Library

The following project creates a very basic C++ project consisting of a:

- static library: libstatic.a
- shared library: libshared.so
- executable ELF: executable

Its purpose is to provide some simple binaries that can then be inspected with
some of the Binutils tools.

As this is a fairly boring CMake project it can be built as you'd expect:

    cmake -G Ninja -S src -B build
    cd build
    ninja

The expected output of running the project is:

    $ ./executable
    In main
    In static_function_one
    In static_function_two
    In shared_function_one
    In shared_function_two

