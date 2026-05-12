/*
=================================================
Practice Problem 3B — NumberCheck
=================================================

Write a function:
    void numberCheck(int n)

Rules — for every number from 1 to n:
- if divisible by 2 AND 7  → print "Lucky"
- if divisible by 2 only   → print "Even"
- if divisible by 7 only   → print "Seven"
- otherwise                → print the number

Call with n = 20.

Expected output:
1 Even 3 Even 5 Even 7 Even 9 Even 11 Even 13 Lucky 15 Even 17 Even 19 Even

Hints:
- exact same structure as FizzBuzz
- just change the conditions and words
- check BOTH (2 AND 7) FIRST!
=================================================
*/

#include <iostream>

void numberCheck(int n) {
    for ( int i=1; i <= n; i++) {
        if (i % 2 == 0 && i % 7 == 0) {
            std::cout << "Lucky" << " ";
        } else if (i % 2 == 0) {
            std::cout << "Even" << " ";
        } else if (i % 7 == 0) {
            std::cout << "Seven" << " ";
        } else {
            std::cout << i << " ";
        }
    } std::cout << "\n";
}

int main() {
    numberCheck(20);
    return 0;
}