﻿#include <iostream>

template <typename T1, typename T2>
T1 Sum(T1 a, T2 b);

int main()
{
    std::cout << Sum(3, 5.76);
    return 0;
}

template <typename T1, typename T2>
T1 Sum(T1 a, T2 b)
{
    return a + b;
}
