#include "io.h"
#include <iostream>

//
int readNumber()
{
    std::cout << "Enter an integer value to add: ";
    int x;
    std::cin >> x;

    return x;
}

void writeAnswer(int x)
{
    std::cout << "The answer is: " << x << '\n';
}