#include <iostream>
#include "add.h"

auto main() -> int
{
    std::cout << "Functional Programming with C++\n";

    auto value = FPC::add<int, double>(2, 2.5);
    std::cout << value << std::endl;

    return 0;
}
