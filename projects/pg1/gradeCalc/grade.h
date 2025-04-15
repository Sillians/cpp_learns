#ifndef GRADE_H
#define GRADE_H

float calculateWeightedScore(float scorePercent, int weightPercent);
float calculateAverage(float assignment, float test, float exam, float participation);
void displayBreakdown(float assignment, float test, float exam, float participation, float totalWeight);
void displayLetterGrade(float average);

#endif // GRADE_H