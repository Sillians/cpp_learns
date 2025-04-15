#include "grade.h"
#include <iostream>
#include <iomanip>

float calculateWeightedScore(float scorePercent, int weightPercent)
{
    return scorePercent * weightPercent;
}

float calculateAverage(float assignment, float test, float exam, float participation)
{
    return (assignment + test + exam + participation) / 100.0f;
}

void displayBreakdown(float assignment, float test, float exam, float participation, float totalWeight)
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n\n\t" << assignment / totalWeight << "% in Programming Assignments\n"
              << "\t" << test / totalWeight << "% in Chapter Tests\n"
              << "\t" << exam / totalWeight << "% in Final Exam\n"
              << "\t" << participation / totalWeight << "% in Class Participation\n";
}

void displayLetterGrade(float average)
{
    std::cout << "\n\nFinal Grade: " << average << "%" << std::endl;

    if (average >= 97 || average == 100)
        std::cout << "\nYour Grade is A+\n";
    else if (average >= 94)
        std::cout << "\nYour Grade is A\n";
    else if (average >= 90)
        std::cout << "\nYour Grade is A-\n";
    else if (average >= 87)
        std::cout << "\nYour Grade is B+\n";
    else if (average >= 84)
        std::cout << "\nYour Grade is B\n";
    else if (average >= 80)
        std::cout << "\nYour Grade is B-\n";
    else if (average >= 77)
        std::cout << "\nYour Grade is C+\n";
    else if (average >= 74)
        std::cout << "\nYour Grade is C\n";
    else if (average >= 70)
        std::cout << "\nYour Grade is C-\n";
    else if (average >= 60)
        std::cout << "\nYour Grade is D\n";
    else
        std::cout << "\nYour Grade is F\n";
}