#include <iostream>
#include <string>

/*

//Array
int main() {
    int score[5] = {85, 90, 78, 92, 88};

    std::cout << score[0] << "\n";
    std::cout << score[1] << "\n";
    std::cout << score[4] << "\n";

    return 0;
}

//Array with loop
int main() {
    int score[5] = {85, 90, 78, 92, 88};

    for (int i = 0; i < 5; i++) {
        std::cout << score[i] << "\n";
    }
    return 0;
}

*/

/* Write a program that:
- Has an array of 5 test scores: {85, 90, 78, 92, 88}
- Uses a loop to calculate the sum
- Calculates the average
- Prints both

Expected output:
Sum: 433
Average: 86.6
*/ 
/*
void printResult(std::string label, double value) {
    std::cout << label << ": " << value << "\n";
}

int main() {
    int score[5] = {85, 90, 78, 92, 88};
    double sum = 0;

    for (int i=0; i <5; i++ ) {
        sum += score[i];
    }
    
    double avg = sum/5;

    printResult("Sum", sum);
    printResult("Average", avg);
    return 0;
}

//2D array

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    std::cout << matrix[0][0] << "\n";
    std::cout << matrix[0][2] << "\n";
    std::cout << matrix[1][1] << "\n";

    return 0;
}

//excercises 
int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            std::cout << matrix[row][col] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

int main() {
    std::string first = "Mohona";
    std::string last = "DS";
    std::string full = first + " " + last;
    std::cout << full << "\n";
    std::cout << full.length() << "\n";
    return 0;
}
*/








