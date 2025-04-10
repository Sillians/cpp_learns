#include <iostream>

void value; // won't work, variables can't be defined with incomplete type void

// Most commonly, void is used to indicate that a function does not return a value:
void writeValue(int x) // void here means no return value
{
    std::cout << "The value of x is: " << x << '\n';
    // no return statement, because this function doesn't return a value
}

// If you use a return statement to try to return a value in such a function, a compile error will result:
void noReturn(int x) // void here means no return value
{
    std::cout << "The value of x is: " << x << '\n';

    return 5; // error
}
