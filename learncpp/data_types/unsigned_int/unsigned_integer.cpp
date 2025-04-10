#include <iostream>

// To define an unsigned integer, we use the unsigned keyword. By convention, this is placed before the type:
unsigned short us;
unsigned int ui;
unsigned long ul;
unsigned long long ull;

int main()
{
    unsigned short x{65535}; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = 65536; // 65536 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    x = 65537; // 65537 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    return 0;
}

int main()
{
    unsigned short x{0}; // smallest 2-byte unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = -1; // -1 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    x = -2; // -2 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    return 0;
}

// assume int is 4 bytes
int main()
{
    unsigned int x{2};
    unsigned int y{3};

    std::cout << x - y << '\n'; // prints 4294967295 (incorrect!)

    return 0;
}

// Unexpected behaviors results when you mix signed and unsigned integers
// assume int is 4 bytes
int main()
{
    unsigned int u{2};
    signed int s{3};

    std::cout << u - s << '\n'; // 2 - 3 = 4294967295

    return 0;
}

// Here’s another example where things go wrong:
// assume int is 4 bytes
int main()
{
    signed int s{-1};
    unsigned int u{1};

    if (s < u) // -1 is implicitly converted to 4294967295, and 4294967295 < 1 is false
        std::cout << "-1 is less than 1\n";
    else
        std::cout << "1 is less than -1\n"; // this statement executes

    return 0;
}
