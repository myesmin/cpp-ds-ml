/*
Input:  "hello"
Output: "olleh"

Input:  "Mohona"
Output: "anohoM"

Write:
std::string reverseString(std::string word)
*/
#include <iostream>
#include <string>

std::string reverseString(std::string word) {
    int len = word.length();
    std::string result = "";

    for (int i = len - 1; i >= 0; i--) {
        result += word[i];
    }
    return result;
}

int main() {
    std::cout << reverseString("hello") << "\n";
    std::cout << reverseString("Mohona") << "\n";
    return 0;
}