#include <iostream>

/* 
int main() {
    int x = 42;
    std::cout << x << "\n";
    std::cout << &x << "\n";
    return 0;
}


int main() {
    int x = 42;
    int* p = &x;

    std::cout << x << "\n";
    std::cout << &x << "\n";
    std::cout << p << "\n";
    std::cout << *p << "\n";

    return 0;
}


int main() {
    int x = 42;
    int*  p = &x;

    *p = 100;

    std::cout << x << "\n";
    std::cout << *p << "\n";

    return 0;
}

*/

void addTen(int x) {
    x += 10;
}

int main() {
    int num = 5;
    addTen(num);
    std::cout << num << "\n";
    return 0;
}

