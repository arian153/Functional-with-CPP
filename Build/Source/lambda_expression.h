#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

namespace FPC
{
    //captureing list : []
    //parameter list : ()
    //body : {}

    inline auto SimpleLambda() -> void
    {
        std::vector<int> int_vector;

        std::for_each(std::begin(int_vector), std::end(int_vector), [](const int& i)
            {
                std::cout << i << ", ";
            });
        std::cout << std::endl;
    }
}
