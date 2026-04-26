#include <iostream>
/*
int main() {
    int age = 27;
    std::cout << age << "\n";
    return 0;
}
*/

/*
int main() {
    int age = 20;
    double height = 5.5;
    bool islearning = true;

    std::cout << age << "\n";
    std::cout << height << "\n";
    std::cout << islearning << "\n";
    return 0;
}
*/ 

/*
int main() {
    bool isLearning = true;
    bool isDone = false;

    std::cout << isLearning << "\n";
    std::cout << isDone << "\n";
    return 0;
}
*/

/*
int main() {
    int x = 5;
    int y = 2;

    std::cout << x + y << "\n";
    std::cout << x - y << "\n";
    std::cout << x * y << "\n";
    std::cout << x / y << "\n";
    return 0;
}
*/

/*
int main() {
    std::cout <<  5 / 2 << "\n"; // int / int → decimal chopped (integer division)
    std::cout << 5.0 / 2 << "\n"; // double / int → double division
    std::cout << 7 / 3 << "\n"; // int / double → decimal kept (normal division)
    std::cout << 7.0 / 3 << "\n"; // double / double → decimal kept (normal division)
    return 0;
}
*/

/*
int main() {
    int correct = 90;
    int total = 100;
    double accuracy = correct / total; // Because correct/total is int / int = 0 first, THEN stored in double. 

    std::cout << accuracy << "\n";
    return 0;
}
*/

/*
int main() {
    int correct = 90;
    int total = 100;
    double accuracy = (double)correct / total; //(double) trick — called type casting 

    std::cout << accuracy << "\n";
    return 0;
}
*/

/*
int main() {
    int x = 5;
    int y = 2;

    std::cout << x % y << "\n"; // 5 divided by 2 = 2 remainder 1
    return 0;
}
*/

/*
int main() {
    std::cout << 10 % 3 << "\n";
    std::cout << 8 % 4 << "\n";
    std::cout << 7 % 5 << "\n";
    return 0;
}
*/

/*
int main () {
    int x = 5; // x is 5
    x = 10; // x is now 10 — old value is gone
    std::cout << x << "\n";
    return 0;
}
*/

/*
int main () {
    int x = 5;
    int y = x;
    x = 10;
    std::cout << x << "\n"; // y gets a COPY of x's value (5)
    std::cout << y << "\n"; // only x changes, y still has 5
    return 0;
}
*/

/*
int main() {
    int x = 10;
    x = x + 5;

    std::cout << x << "\n";
    return 0;
}
*/

/*
int main() {
    int x = 10;
    x += 5;
    std::cout << x << "\n";
    x++;
    std::cout << x << "\n";
    x--;
    x--;
    std::cout << x << "\n";
    return 0;
}
*/

//char — single character
//char   →  single quotes  'A'
//string →  double quotes  "Mohona"

/*
int main() {
    char grade = 'A';
    std::cout << grade << "\n";
    return 0;
}
*/

//Type Casting — changing one data type to another

int main() {
    int x = 7;
    int y = 2;

    std::cout << x / y << "\n";
    std::cout << (double)x / y << "\n";
    return 0;
}