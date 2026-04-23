#include <iostream>

// Example 1 — Hello World with std::endl
/*
int main() {
    std::cout << "Hello, Mohona!" << std::endl;
    return 0;
}
*/

// Example 2 — Hello World with "\n"
/*
int main() {
    std::cout << "Hello, Mohona!" << "\n";
    return 0;
}
*/

// Example 3 — Two lines, no blank line
/*
int main() {
    std::cout << "My name is Mohona" << "\n";
    std::cout << "I am studying C++ for DS and AI/ML" << "\n";
    return 0;
}
*/

// Example 4 — Two lines with blank line using separate cout
/*
int main() {
    std::cout << "My name is Mohona" << "\n";
    std::cout << "\n";
    std::cout << "I am studying C++ for DS and AI/ML" << "\n";
    return 0;
}
*/

// Example 5 — Blank line using chained "\n"
/*
int main() {
    std::cout << "My name is Mohona" << "\n" << "\n";
    std::cout << "I am studying C++ for DS and AI/ML" << "\n";
    return 0;
}
*/

// Example 6 — Two lines chained on one cout
/*
int main() {
    std::cout << "My name is Mohona" << "\n" << "\n";
    std::cout << "I am studying C++" << "\n" << "for DS and AI/ML" << "\n";
    return 0;
}
*/

// Example 7 — Challenge: C++ three times on one cout (ACTIVE)
int main() {
    std::cout << "C++" << "\n" << "C++" << "\n" << "C++" << "\n";
    return 0;
}