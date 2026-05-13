/*
A prime number is only divisible by 1 and itself.

2, 3, 5, 7, 11, 13 → prime
4, 6, 8, 9, 10     → not prime

Write:
bool isPrime(int n)

Test with:
7  → true  (prime)
9  → false (not prime)
2  → true  (prime)
1  → false (not prime — special case!)

Output:
7 is prime
9 is not prime
2 is prime
1 is not prime

Hints:
- loop from 2 to n-1
- if ANY number divides n evenly → not prime
- use % operator
- return false immediately if divisible
- return true after loop finishes
*/

#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    } return true;
}


int main() {
    int numbers[] = {7, 9, 2, 1};
    
    for (int i = 0; i < 4; i++) {
        if (isPrime(numbers[i])) {
            std::cout << numbers[i] << " is prime" << "\n";
        } else {
            std::cout << numbers[i] << " is not prime" << "\n";
        }
    }
    return 0;
}