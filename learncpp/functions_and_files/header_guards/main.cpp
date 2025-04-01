#include "square.h" // square.h is also included once here
#include <iostream>

int main()
{
    std::cout << "Enter the length of the square: ";
    int len;
    std::cin >> len;

    std::cout << "A square has " << getSquareSides() << " sides\n";
    std::cout << "A square of length " << len << " has perimeter length " << getSquarePerimeter(len) << '\n';

    return 0;
}