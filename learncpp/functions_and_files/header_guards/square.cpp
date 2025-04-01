#include "square.h" // square.h is included once here

int getSquareSides() // actual definition for getSquareSides
{
    return 4;
}

int getSquarePerimeter(int sideLength) // actual definition for getSquarePerimeter
{
    return sideLength * getSquareSides();
}