//*****************************************************************************************************
//      Online Purchase Cost Calculator
//
//      This program calculates the total cost of an online purchase based on the item's price and
//      weight.
//
//*****************************************************************************************************

#include <iostream>
#include <iomanip>
#include "shipping.h"

int main()
{
    constexpr float TAX_RATE = 4.225f / 100.0f;

    float price = getPrice();
    float weight = getWeight();

    if (price < 0 & weight < 0)
    {
        std::cerr << "Invalid input: price and weight must be non-negative. Please input a positive price and weight value\n";
        return 1;
    }

    float shipping = computeShipping(weight);
    float tax = calculateTax(TAX_RATE, price);
    float totalCost = calculateTotalCost(price, tax, shipping);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nTotal price: $" << totalCost << std::endl;

    return 0;
}
