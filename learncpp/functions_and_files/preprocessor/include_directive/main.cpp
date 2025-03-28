#include "sillians.h" // copies #define MY_NAME from sillians.h here
#include <iostream>

int main()
{
    std::cout << "You can also call me, " << MY_NAME << '\n'; // preprocessor replaces MY_NAME with "Sillians"

    return 0;
}