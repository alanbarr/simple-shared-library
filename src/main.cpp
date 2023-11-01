#include <iostream>

#include "static_library.hpp"

int main()
{
    std::cout << "In " << __func__ << '\n';
    static_library::static_function_one();
    return 0;
}

