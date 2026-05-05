#include <iostream>
#include <cmath> // gives us math functions like abs(), sqrt(), pow()

/* 
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    std::cout << result << "\n";
    return 0;
}
*/

/*
int multiply(int a, int b) {
    return a * b;
}

int main() {
    std::cout << multiply(5,6) << "\n";
    std::cout << multiply(3,3) << "\n";
    std::cout << multiply(10,2) << "\n";
    return 0;
}
   

//void function

void greet(std::string name) {
    std::cout << "Hello, " << name << "\n";
}

int main() {
    greet("Mohona");
    greet("everyone");
    return 0;
}
 

double accuracy(int correct, int total) {
    return (double)correct/total;
}

void printResult(double acc) {
    std::cout << "Accuracy: " << acc << "\n";
}

int main() {
    double trainAcc = accuracy(90, 100);
    double testAcc = accuracy(82, 100);

    printResult(trainAcc);
    printResult(testAcc);

    return 0;
}



double calcLoss(double predicted, double actual) {
    return predicted-actual;
}

int main() {
    std::cout << calcLoss(0.9, 1.0) << "\n";
    std::cout << calcLoss(0.5, 1.0) << "\n";
    return 0;
}



double calcLoss(double predicted, double actual) {
    return abs(predicted - actual);
}

int main() {
    std::cout << calcLoss(0.9, 1.0) << "\n";
    std::cout << calcLoss(0.5, 1.0) << "\n";
    return 0;
}

*/ 

double accuracy(int correct, int total) {
    return (double) correct/total;
}

double calcLoss(double predicted, double actual) {
    return abs(predicted - actual);
}

void printResult(std::string label, double value) {
    std::cout << label << ": " << value << "\n";
}

int main() {
    double trainAcc = accuracy(90, 100);
    double testAcc = accuracy(82, 100);
    double trainLoss = calcLoss(0.9, 1.0);
    double testLoss = calcLoss(0.8, 1.0);


    printResult("Train accuracy", trainAcc);
    printResult("Test accuracy", testAcc);
    printResult("Train loss", trainLoss);
    printResult("Test loss", testLoss);

    return 0;
}
