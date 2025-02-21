#include <iostream>
#include <limits>
using namespace std;

// Constants
int main()
{
    const double pi = 3.142;
    cout << pi;

    cin.clear();                                         // reset any error flags
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
    cin.get();                                           // get one more char from the user

    return 0;
}

// multi line comments
/* This is a multi-line comment.
   This line will be ignored.
   So will this one. */

// Defining a variable
int main()
{
    int x; // definition of variable x

    return 0;
}

// Data types
int int_variable;
double width; // define a variable named width, of type double

// Defining multiple variables
int a;
int b;

int a, b;

int a, double b; // wrong (compiler error)

int a;
double b; // correct (but not recommended)

// correct and recommended (easier to read)
int a;
double b;

// Variable assignment and initialization
int main()
{
    int x;    // define an integer variable named x
    int y, z; // define two integer variables, named y and z

    int width; // define an integer variable named width
    width = 5; // assignment of value 5 into variable width
    return 0;
}

// Using assignment operator twice
int main()
{
    int width; // define a variable named width
    width = 5; // copy assignemnt of value 5 into variable width

    std::cout << width; // print 5
    width = 7;          // change value stored in variable width to 7

    std::cout << width; // prints 7

    return 0;
}

// Variable initialization
int main()
{
    int width{10};      // define variable width and initialize with initial value 5
    std::cout << width; // prints 5

    return 0;
}

// Different  forms of initialization
int a; // default-initialization (no initializer)

// Traditional initialization forms:
int b = 5; // copy-initialization (initial value after equals sign)
int c(6);  // direct-initialization (initial value in parenthesis)

// Modern initialization forms (preferred):
int d{7}; // direct-list-initialization (initial value in braces)
int e{};  // value-initialization (empty braces)

// List-initialization disallows narrowing conversions
int main()
{
    // An integer can only hold non-fractional values.
    // Initializing an int with fractional value 4.5 requires the compiler to convert 4.5 to a value an int can hold.
    // Such a conversion is a narrowing conversion, since the fractional part of the value will be lost.

    int w1{4.5}; // compile error: list-init does not allow narrowing conversion

    int w2 = 4.5; // compiles: w2 copy-initialized to value 4
    int w3(4.5);  // compiles: w3 direct-initialized to value 4

    return 0;
}

// Value-initialization and zero-initialization
int width{}; // value-initialization / zero-initialization to value 0

int main()
{
    int x{};       // value initialization
    std::cin >> x; // we're immediately replacing that value so an explicit 0 would be meaningless
}

// Initializing multiple variables
int a = 5, b = 6; // copy-initialization
int c(7), d(8);   // direct-initialization
int e{9}, f{10};  // direct-list-initialization
int i{}, j{};     // value-initialization

// Unused initialized variables warnings
int main()
{
    int x{5} // variable x defined

    // but not used anywhere

    return 0;
}

// The [[maybe_unused]] attribute
int main()
{
    // Here's some math/physics values that we copy-pasted from elsewhere
    double pi{3.14159};
    double gravity{9.8};
    double phi{1.61803};

    std::cout << pi << '\n';  // pi is used
    std::cout << phi << '\n'; // phi is used

    // The compiler will likely complain about gravity being defined but unused

    return 0;
}

int main()
{
    [[maybe_unused]] double pi{3.14159};  // Don't complain if pi is unused
    [[maybe_unused]] double gravity{9.8}; // Don't complain if gravity is unused
    [[maybe_unused]] double phi{1.61803}; // Don't complain if phi is unused

    std::cout << pi << '\n';
    std::cout << phi << '\n';

    // The compiler will no longer warn about gravity not being used

    return 0;
}

// The input/output library
// std::cout
/*
The iostream library contains a few predefined variables for us to use. One of the most useful is std::cout,
which allows us to send data to the console to be printed as text. cout stands for “character output”.

we use std::cout, along with the insertion operator (<<).

To print more than one thing on the same line, the insertion operator (<<) can be used multiple times
in a single statement to concatenate (link together) multiple pieces of output. For example:

This uses the << operator twice, first to output Hello and then to output world.

*/

int main()
{
    std::cout << "Hello" << " world!";
    return 0;
}

// Using std::endl to output a newline
int main()
{
    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
    std::cout << "My name is Sillians." << std::endl;

    return 0;
}

// Using "\n"
int main()
{
    int x{5};
    std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)
    return 0;
}

// std::cin
/*
std::cin is another predefined variable in the iostream library. Whereas std::cout prints data to the console (using the insertion operator << to provide the data),
std::cin (which stands for “character input”) reads input from keyboard. We typically use the extraction
operator >> to put the input data in a variable (which can then be used in subsequent statements).
*/
int main()
{
    std::cout << "Enter a number: "; // ask user for a number

    int x{};       // define variable x to hold user input (and value-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << '\n';
    return 0;
}

#include <iostream> // for std::cout and std::cin

int main()
{
    std::cout << "Enter two numbers separated by a space: ";

    int x{};            // define variable x to hold user input (and value-initialize it)
    int y{};            // define variable y to hold user input (and value-initialize it)
    std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}

int main()
{
    std::cout << "Enter two numbers: ";

    int x{};
    std::cin >> x;

    int y{};
    std::cin >> y;

    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}

int main()
{
    std::cout << "Enter a number: "; // ask user for a number
    int x{};                         // define variable x to hold user input
    std::cin >> x;                   // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n';

    return 0;
}

// Asks the user to enter three values and then print those values as a sentence.
int main()
{
    std::cout << "Enter three numbers: ";

    int x{};
    int y{};
    int z{};
    std::cin >> x >> y >> z;

    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";

    return 0;
}

// Uninitialized variables and undefined behavior
// Undefined behavior
/*
Code implementing undefined behavior may exhibit any of the following symptoms:

- Your program produces different results every time it is run.
- Your program consistently produces the same incorrect result.
- Your program behaves inconsistently (sometimes produces the correct result, sometimes not).
- Your program seems like it’s working but produces incorrect results later in the program.
- Your program crashes, either immediately or later.
- Your program works on some compilers but not others.
- Your program works until you change some other seemingly unrelated code.

*/

int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized because we haven't given it a value

    // print the value of x to the screen
    std::cout << x << '\n'; // who knows what we'll get, because x is uninitialized

    return 0;
}

void doNothing(int &) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized

    doNothing(x); // make the compiler think we're assigning a value to this variable

    // print the value of x to the screen (who knows what we'll get, because x is uninitialized)
    std::cout << x << '\n';

    return 0;
}
