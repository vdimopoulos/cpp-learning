#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Enter an integer: \n";
    int num{};
    std::cin >> num;
    return num;
}

void writeAnswer(int ans)
{
    std::cout << ans << "\n";
}