/*
Practice Problem 2 — Palindrome Check
-------------------------------------------
Write a function:
    bool isPalindrome(std::string word)

That returns true if the word is a palindrome,
false if it is not.

Test with:
    "racecar" → true
    "hello"   → false
    "madam"   → true

Hint: compare first character to last
     second character to second last
     use word.length() for the size
*/
#include <iostream>
#include <string>

bool isPalindrome(std::string word) {
    int len = word.length();


    for (int i = 0; i < len/2; i++) {
        if (word[i] != word[len - 1 - i]) {
            return false; 
        } 
    } 
    return true; 
}

int main() {
    std::cout << isPalindrome("racecar") << "\n";
    std::cout << isPalindrome("hello") << "\n";
    std::cout << isPalindrome("madam") << "\n";
    return 0;
}