#pragma once

namespace FPC
{
    template <typename I, typename J>
    auto add(I i, J j) -> decltype(i + j)
    {
        return i + j;
    }
}
