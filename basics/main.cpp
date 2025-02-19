#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	cout << "Hello, C++ in VS Code on macOS!" << endl;
	return 0;
}

// declaring variables
int main()
{
	int file_size = 100;
	double sales = 99.54;
	cout << file_size;
	return 0;
}

// Constants
int main()
{
	const double pi = 3.142;
	cout << pi;
	return 0;
}

// Naming Conventions
int main()
{
	int file_size; // Snake Case
	int FileSize;  // Pascal Case
	int fileSize;  // Camel Case
	int iFileSize; // Hungarian Notation
	return 0;
}

// Mathematical Expressions
int main()
{
	int x = 50;
	int y = 4;
	int z = x + y;
	cout << z;
	return 0;
}

// Writing output to the console
int main()
{
	int x = 50;
	int y = 45;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}

// Example Exercise
int main()
{
	int total_sales = 95000;
	cout << "Sales: $" << total_sales << endl;

	const double state_tax_percentage = 0.04;
	double amount_state_tax = state_tax_percentage * total_sales;
	cout << "State Tax Amount: $" << amount_state_tax << endl;

	const double county_tax_percentage = 0.02;
	double amount_county_tax = county_tax_percentage * total_sales;
	cout << "County Tax Amount: $" << amount_county_tax << endl;

	// Get the total amount of tax to pay
	int total_tax = amount_county_tax + amount_state_tax;

	cout
		<< "Total tax to pay is: $" << total_tax << endl;
	return 0;
}

// reading input from the user
int main()
{
	cout << "Enter values for x and y: ";
	double x;
	double y;

	cin >> x >> y;

	cout << x + y << endl;
	return 0;
}

// Conversion of a temperature value from fahrenheit to celsius
int main()
{
	cout << "Enter the temperature in degree fahrenheit: ";
	int temperatureFahren;
	cin >> temperatureFahren;

	double temperatureCelsius = (temperatureFahren - 32) * (5 / 9);
	cout << "The temperature in degree Celsius is: " << temperatureCelsius << endl;
	return 0;
}

// Writing to the console
int main()
{
	double result = pow(2, 5);
	cout
		<< result << endl;
	return 0;
}

// Enter the radius and output the area of a circle
int main()
/*
Get the area of a circle
*/
{
	cout << "Enter the radius of the circle: ";
	double radius;
	cin >> radius;
	const double pi = 3.14;

	double area = pi * pow(radius, 2);
	cout << "The area of the circle is: " << area << endl;
	return 0;
}

// Initializing Variables
int main()
{
	auto price = 99.99;
	auto interestRate = 4.67;
	auto fileSize = 900000L;
	auto letter = 'a';
	auto isValid = false;
	return 0;
}

// Narrowing
int main()
{
	int number = 1'000'000;
	short another = number;
	cout << another;
	return 0;
}

// Generating Random Numbers
int main()
{
	srand(5);
	int number = rand();
	cout << number << endl;
	return 0;
}

// std::cin.clear();													// reset any error flags
// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
// std::cin.get();														// get one more char from the user