#include <iostream>

void doPrint()
{
    std::cout << "In doPrint()\n";
}

// definition of user-defined function main()
int main()
{
    std::cout << "Starting main function\n";
    doPrint(); // function-call for the first time
    doPrint(); // function-call for the second time
    std::cout << "Ending main function\n";

    return 0;
}

void doB()
{
    std::cout << "Running the function doB()\n";
}

void doA()
{
    std::cout << "starting the function doA()\n";

    doB(); // function call

    std::cout << "Ending the function doA()\n";
}

// defining the main function
int main()
{
    std::cout << "Starting the main() function\n";

    doA();

    std::cout << "Ending the main() function\n";

    return 0;
}

// Function Return Values

// int is the return type
// A return type of int means the function will return some integer value to the caller (the specific value is not specified here)
int returnFive()
{
    // the return statement provides the value that will be returned
    return 5; // return the value 5 back to the caller
}

int main()
{
    std::cout << returnFive() << '\n';     // prints 5
    std::cout << returnFive() + 2 << '\n'; // prints 7

    returnFive(); // okay: the value 5 is returned, but is ignored since main() doesn't do anything with it

    return 0;
}

int getValueFromUser()
{
    std::cout << "Enter an integer value: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int num{getValueFromUser()};

    std::cout << num << " doubled is: " << num * 2 << '\n';

    return 0;
}

// Reusing Functions
// Return values provide a way for functions to return a single value back to the function’s caller.
// Functions provide a way to minimize redundancy in our programs.
int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int x{getValueFromUser()};
    int y{getValueFromUser()};

    std::cout << x << " + " << y << " = " << x + y << '\n';

    return 0;
}

// Void functions (non-value returning functions)
void voidFunction()
{
    std::cout << "This function does not return any value" << '\n';
}

int main()
{
    voidFunction();

    return 0;
}

// function that does not return any value
void returnNothing()
{
}

// function that returns a value
int returnFive()
{
    return 5;
}

int main()
{
    // When calling a function by itself, no value is required
    returnNothing(); // ok: we can call a function that does not return a value
    returnFive();    // ok: we can call a function that returns a value, and ignore that return value

    // When calling a function in a context that requires a value (like std::cout)
    std::cout << returnFive();    // ok: we can call a function that returns a value, and the value will be used
    std::cout << returnNothing(); // compile error: we can't call a function that returns void in this context

    return 0;
}

// Introduction to function parameters and arguments
int add(int x, int y)
{
    return x + y;
}

int main()
{
    std::cout << add(3, 2) << '\n';
    std::cout << add(-8, 2) << '\n';

    return 0;
}

//  How parameters and arguments work together
// This function has two integer parameters, one named x, and one named y
// The values of x and y are passed in by the caller
void printValues(int x, int y)
{
    std::cout << x << '\n';
    std::cout << y << '\n';
}

int main()
{
    printValues(6, 7); // This function call has two arguments, 6 and 7

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

int multiply(int z, int w)
{
    return z * w;
}

int main()
{
    std::cout << add(4, 5) << '\n';         // within add() x=4, y=5, so x+y=9
    std::cout << add(1 + 2, 3 * 4) << '\n'; // within add() x=3, y=12, so x+y=15

    int a{5};
    std::cout << add(a, a) << '\n'; // evaluates (5 + 5)

    std::cout << add(1, multiply(2, 3)) << '\n'; // evaluates 1 + (2 * 3)
    std::cout << add(1, add(2, 3)) << '\n';      // evaluates 1 + (2 + 3)

    return 0;
}

// Fixing the challenge program
int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void printDouble(int value) // This function now has an integer parameter
{
    std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
    int num{getValueFromUser()};
    printDouble(num);

    return 0;
}

//  Write a function called doubleNumber() that takes one integer parameter. The function should return double the value of the parameter.
int doubleNumber(int x)
{
    return x * 2;
}

// Write a complete program that reads an integer from the user, doubles it using the doubleNumber() function you wrote in the previous quiz question,
// and then prints the doubled value out to the console.

int getValueFromUser()
{
    std::cout << "Input an integer here: ";
    int input{};
    std::cin >> input;

    return input;
}

int doubleNumber(int x)
{
    return 2 * x;
}

int main()
{
    int num{getValueFromUser()};
    std::cout << "The doubled value is: " << doubleNumber(num);

    return 0;
}
