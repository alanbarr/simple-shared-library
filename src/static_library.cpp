#include <iostream>

#include "static_library.hpp"
#include "shared_library.hpp"

namespace static_library
{
namespace
{
void static_function_two()
{
    std::cout << "In " << __func__ << '\n';
    shared_library::shared_function_one();
}

}// namespace

void static_function_one()
{
    std::cout << "In " << __func__ << '\n';
    static_function_two();
}

}// namespace static_library
