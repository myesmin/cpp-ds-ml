/*
=================================================
DAY 07 — SOLO PROJECT: Student Grade Analyzer
=================================================

Build a Student Grade Analyzer with these scores:
{72.5, 88.0, 65.3, 91.2, 78.6, 85.0, 55.8, 93.4, 70.1, 82.7}

Write these functions:
- double calcMean(double scores[], int size)
- double calcMax(double scores[], int size)
- double calcMin(double scores[], int size)
- double calcRange(double scores[], int size)
- int countAbove(double scores[], int size, double threshold)
- double calcPassRate(double scores[], int size, double threshold)
- void printReport(std::string label, double value)  // prints with %
- void printReport(std::string label, int value)     // prints without %

Expected output:
=== Student Grade Report ===
Class average:            78.3%
Highest score:            93.4%
Lowest score:             55.8%
Score range:              37.6%
Students passing (>=60%): 9
Pass rate:                90.0%
============================

Rules:
- No looking at the ML project code
- Write everything from scratch
- Try for 10 minutes before asking for help
=================================================
*/

// YOUR CODE STARTS HERE:
#include <iostream>
#include <string>

double calcMean(double score[], int size) {
    double sum = 0;
    for (int i=1; i < size; i++) {
        sum += score[i];
    }
    return sum;
}

void print(std::string label, double value) {
    std::cout << label << ": " << value << "%" << "\n";
}

int main() {
    double score[10] = {72.5, 88.0, 65.3, 91.2, 78.6, 85.0, 55.8, 93.4, 70.1, 82.7};

    print("Class average", calcMean(score, 10));
    return 0;
}

