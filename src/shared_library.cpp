#include <iostream>

#include "shared_library.hpp"
#include "static_library.hpp"

namespace shared_library
{
namespace
{
void shared_function_two()
{
    std::cout << "In " << __func__ << '\n';
}
}// namespace

void shared_function_one()
{
    std::cout << "In " << __func__ << '\n';
    shared_function_two();
}

}// namespace shared_library
