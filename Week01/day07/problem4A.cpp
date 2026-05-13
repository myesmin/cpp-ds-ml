/*
=================================================
Practice Problem 4A — Grade Calculator
=================================================

Write a function:
    char getGrade(double score)

That returns a letter grade based on score:
    90 and above  → 'A'
    80 to 89      → 'B'
    70 to 79      → 'C'
    60 to 69      → 'D'
    below 60      → 'F'

Test with:
    95.0 → A
    82.5 → B
    74.1 → C
    61.0 → D
    55.8 → F

Hints:
- return type is char (Day 2!)
- use if / else if / else (Day 3!)
- no loops needed — just conditions
=================================================


// solution as void function 

#include <iostream>

void getGrade(double score) {
    if (score >= 90) {
        std::cout << score << " → " << "A";
    } else if (score >= 80) {
        std::cout << score << " → " << "B";
    } else if (score >= 70) {
        std::cout << score << " → " << "C";
    } else if (score >= 60) {
        std::cout << score << " → " << "D";
    } else {
        std::cout << score << " → " << "F";
    } std::cout << "\n";
}

int main() {
    getGrade(95.0);   // A
    getGrade(82.5);   // B
    getGrade(74.1);   // C
    getGrade(61.0);   // D
    getGrade(55.8);   // F
    return 0;
}

//using char 
#include <iostream>
char getGrade(double score) {
    if (score >= 90)  return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}

int main() {
    std::cout << getGrade(95.0) << "\n";
    std::cout << getGrade(82.5) << "\n";
    std::cout << getGrade(74.1) << "\n";
    std::cout << getGrade(61.0) << "\n";
    std::cout << getGrade(55.8) << "\n";
    return 0;
}
*/

// using for loop
#include <iostream>
void getGrade(double score[], int size) {
    for (int i = 0; i < size; i++) {
        char grade;
        if (score >= 90)  grade = 'A';
        else if (score >= 80) grade = 'B';
        else if (score >= 70) grade = 'C';
        else if (score >= 60) grade = 'D';
        else grade = 'F';
        std::cout << scores[i] << " → " << grade << "\n";
    }
    
}

int main() {
    double scores[] = {95.0, 82.5, 74.1, 61.0, 55.8};
    getGrades(scores, 5);
    return 0;
}