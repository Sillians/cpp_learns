#include <iostream>

#define PRINT_SILLIANS

int main()
{
#ifdef PRINT_SILLIANS
    std::cout << "This will print Sillians\n"; // will be compiled since PRINT_SILLIANS is defined
#endif

#ifdef PRINT_BOB
    std::cout << "This will not print Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif

#ifndef PRINT_BRYAN
    std::cout << "This will print Bryan\n"; // will be compiled since PRINT_BRYAN was never #defined
#endif

    std::cout << "This is Alexia\n";

#if 0  // Don't comile anything starting here
    std::cout << "Cane\n";
    std::cout << "Steve\n";
#endif // until this point

#if 1 // always true, so the following code will be compiled
    std::cout << "Applied Mathematics for ML\n";
    /* Some
    multi-line
    comment here
    */
    std::cout << "Agentic AI\n";
#endif // until this point

    return 0;
}