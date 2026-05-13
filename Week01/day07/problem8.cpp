/*
Calculate factorial of a number using a loop.

factorial(5) = 5 × 4 × 3 × 2 × 1 = 120
factorial(0) = 1  (special case!)

Input:  5
Output: Factorial: 120

Write:
int factorial(int n)

Hint — 
think about what variable to start at and 
how it changes each loop. Not count++ this time!
*/
#include <iostream>

int factorial(int n) {
    int result = 1;

    for (int i = n; i >= 1; i--) {
        result *= i;
    }
    return result;
}

/*
int main() {
    int factor = factorial(0);
    std::cout << "Factorial: " << factor << "\n";
    return 0;
}
*/

int main() {
    std::cout << "Factorial: " << factorial(5) << "\n";   // 120
    std::cout << "Factorial: " << factorial(0) << "\n";   // 1
    std::cout << "Factorial: " << factorial(3) << "\n";   // 6
    return 0;
}