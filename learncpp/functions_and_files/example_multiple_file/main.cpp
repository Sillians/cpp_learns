#include <iostream>
#include "input.h"

// Programs with Multiple Code files

int main()
{
    int x{getInteger()};
    int y{getInteger()};

    std::cout << x << " + " << y << " is " << x + y << '\n';
    return 0;
}