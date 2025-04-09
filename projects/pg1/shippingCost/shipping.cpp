// function defintion and contains all the computation and logic.
#include "shipping.h" // square.h is included once here
#include <iostream>

float computeShipping(float weight)
{
    const float LESS_ONE_LB = 10,
                LESS_FIVE_LB = 7,
                LESS_EIGHT_LB = 5,
                LESS_TEN_LB = 3,
                LESS_TWENTY_LB = 2,
                ABOVE_TWENTY = 1;

    if (weight < 1)
        return LESS_ONE_LB * weight;
    else if (weight < 5)
        return LESS_FIVE_LB * weight;
    else if (weight < 8)
        return LESS_EIGHT_LB * weight;
    else if (weight < 10)
        return LESS_TEN_LB * weight;
    else if (weight < 20)
        return LESS_TWENTY_LB * weight;
    else
        return ABOVE_TWENTY * weight;
}

int getPrice()
{
    float price;

    std::cout << "Calculate the total cost of your online purchase" << std::endl;
    std::cout << "Enter the price of the item: ";

    std::cin >> price;
    return price;
}

int getWeight()
{
    float weight;

    std::cout << "Enter the weight of the item: ";
    std::cin >> weight;
    return weight;
}

int calculateTax(float taxRate, float price)
{
    float tax{};
    tax = taxRate * price;
    return tax;
}

int calculateTotalCost(float price, float tax, float shipping)
{
    float totalCost{};
    totalCost = price + tax + shipping;
    return totalCost;
}