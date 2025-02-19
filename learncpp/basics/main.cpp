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
