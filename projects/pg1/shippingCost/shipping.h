#ifndef SHIPPING_H
#define SHIPPING_H

// contains all forward declarations

float computeShipping(float weight);

int getPrice();

int getWeight();

int calculateTax(float taxRate, float price);

int calculateTotalCost(float price, float tax, float shipping);

#endif