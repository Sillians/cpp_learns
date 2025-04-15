#include <iostream>
#include "grade.h"

int main()
{
    const int ASSIGNMENT_PERCENT = 15,
              TEST_PERCENT = 50,
              EXAM_PERCENT = 30,
              PARTICIPATION_PERCENT = 5;

    float inputPercent, assignmentWeight, testWeight, examWeight, participationWeight;

    std::cout << "Grade Calculator - Computer Programming I" << std::endl;

    std::cout << "\nThe weight of each deliverable on their final grade\n"
              << "\tProgramming Assignments: " << ASSIGNMENT_PERCENT << "%\n"
              << "\tChapter Tests: " << TEST_PERCENT << "%\n"
              << "\tFinal Exam: " << EXAM_PERCENT << "%\n"
              << "\tClass Participation: " << PARTICIPATION_PERCENT << "%" << std::endl;

    std::cout << "\nWhat is the graded percentage (out of 100%) for Programming Assignments? ";
    std::cin >> inputPercent;
    assignmentWeight = calculateWeightedScore(inputPercent, ASSIGNMENT_PERCENT);

    std::cout << "What is the graded percentage (out of 100%) for Chapter Tests? ";
    std::cin >> inputPercent;
    testWeight = calculateWeightedScore(inputPercent, TEST_PERCENT);

    std::cout << "What is the graded percentage (out of 100%) for Final Exam? ";
    std::cin >> inputPercent;
    examWeight = calculateWeightedScore(inputPercent, EXAM_PERCENT);

    std::cout << "What is the graded percentage (out of 100%) for Class Participation? ";
    std::cin >> inputPercent;
    participationWeight = calculateWeightedScore(inputPercent, PARTICIPATION_PERCENT);

    float average = calculateAverage(assignmentWeight, testWeight, examWeight, participationWeight);

    displayBreakdown(assignmentWeight, testWeight, examWeight, participationWeight,
                     ASSIGNMENT_PERCENT + TEST_PERCENT + EXAM_PERCENT + PARTICIPATION_PERCENT);
    displayLetterGrade(average);

    return 0;
}
