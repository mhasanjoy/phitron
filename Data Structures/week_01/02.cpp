// namespace
#include<iostream>

int x = 10;

namespace info
{
    int x = 5;
}

int main()
{
    std::cout << x << std::endl;
    std::cout << info::x << std::endl;

    return 0;
}
