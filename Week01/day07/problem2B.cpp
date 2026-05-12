/*
Practice Problem 2B — Reverse a String
--------------------------------------------
Write a function:
    std::string reverseString(std::string word)

That returns the string reversed.

Test with:
    "hello"   → "olleh"
    "racecar" → "racecar" (same forwards and backwards!)
    "Mohona"  → "anohoM"

Hint: 
- create an empty string result = ""
- loop backwards through the word
- add each character to result
- return result

New thing you need:
    result += word[i]   // adds one character to a string
*/

// YOUR CODE STARTS HERE:
#include <iostream>
#include <string>

std::string reverseString(std::string word) {
    int len = word.length(); 
    std::string result = "";

    for (int i = len-1; i >= 0; i--) {
        result += word[i];
    }
    return result;
}

int main() {
    std::cout << reverseString("hello") << "\n";
    std::cout << reverseString("racecar") << "\n";
    std::cout << reverseString("Mohona") << "\n";
    return 0;
}

