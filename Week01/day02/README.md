# Day 2 — Variables, Data Types & Operators

**Date:** April 23, 2026  
**Goal:** Understand variables, data types, arithmetic operators, and type casting in C++

---

## 1. Variables

A variable is a named container that holds a value. In Python you just write `x = 42`. In C++ you must declare the TYPE first:

```cpp
int age = 20;
```

Breaking it down:

```
int    age    =    20   ;
↑       ↑     ↑    ↑    ↑
type   name  assign value end
```

- `int` — what type of data it holds
- `age` — the name you give it
- `=` — assign this value
- `20` — the value
- `;` — end of statement

---

## 2. Core Data Types

```cpp
int     age        = 20;       // whole numbers       → -2B to +2B
double  height     = 5.6;      // decimal numbers     → 64-bit precision
bool    isLearning = true;     // true or false
char    grade      = 'A';      // single character    → use single quotes
```

### bool prints as a number:

```cpp
bool isLearning = true;
bool isDone     = false;
std::cout << isLearning << "\n";   // prints 1
std::cout << isDone     << "\n";   // prints 0
```

```
true  →  1
false →  0
```

### char uses single quotes:

```cpp
char grade = 'A';    // ✅ single quotes for single character
char grade = "A";    // ❌ wrong! double quotes = string, not char
```

---

## 3. Arithmetic Operators

```cpp
int x = 5;
int y = 2;

x + y  →  7    // addition
x - y  →  3    // subtraction
x * y  →  10   // multiplication
x / y  →  2    // division (integer division — decimal chopped!)
x % y  →  1    // modulo (remainder after division)
```

---

## 4. Integer Division ⚠️

This is one of the most common bugs in C++!

When BOTH numbers are `int`, C++ throws away the decimal:

```cpp
int x = 5;
int y = 2;
std::cout << x / y << "\n";   // prints 2, NOT 2.5!
```

At least ONE side must be `double` to keep the decimal:

```cpp
std::cout << 5.0 / 2 << "\n";   // prints 2.5 ✅
std::cout << 5 / 2.0 << "\n";   // prints 2.5 ✅
std::cout << 5 / 2   << "\n";   // prints 2   ❌ decimal chopped!
```

### Rule:

```
int    / int    →  decimal chopped  (integer division)
double / int    →  decimal kept
int    / double →  decimal kept
double / double →  decimal kept
```

### Real ML bug example:

```cpp
int correct = 90;
int total   = 100;
double accuracy = correct / total;   // BUG! prints 0, not 0.9
```

Fix with type casting:

```cpp
double accuracy = (double)correct / total;   // ✅ prints 0.9
```

---

## 5. Modulo Operator `%`

Gives you the **remainder** after division:

```cpp
5  % 2  →  1   // 5 / 2 = 2 remainder 1
10 % 3  →  1   // 10 / 3 = 3 remainder 1
8  % 4  →  0   // 8 / 4 = 2 remainder 0
7  % 5  →  2   // 7 / 5 = 1 remainder 2
```

### Useful for:

```cpp
// check if number is even or odd
10 % 2 == 0   // even
7  % 2 == 1   // odd

// print every 10th epoch in ML training loop
if (epoch % 10 == 0)
    std::cout << "Progress update" << "\n";
```

---

## 6. Reassigning Variables & Copy by Value

You can reassign a variable after declaring it:

```cpp
int x = 5;
x = 10;
std::cout << x << "\n";   // prints 10
```

Variables hold COPIES — they don't link to each other:

```cpp
int x = 5;
int y = x;   // y gets a COPY of x's value (5)
x = 10;      // only x changes
// x = 10, y = 5 — y is NOT affected!
```

```
x  [ 10 ]    ← changed
y  [  5 ]    ← still holds its own copy
```

---

## 7. Shorthand Operators

Instead of writing `x = x + 5` you can write `x += 5`:

```cpp
x += 5;   // same as x = x + 5
x -= 5;   // same as x = x - 5
x *= 5;   // same as x = x * 5
x /= 5;   // same as x = x / 5
x %= 5;   // same as x = x % 5
```

---

## 8. Increment & Decrement

```cpp
x++;   // same as x = x + 1  (increment)
x--;   // same as x = x - 1  (decrement)
```

You'll use `x++` constantly in loops!

```cpp
int x = 10;
x += 5;   // x = 15
x++;      // x = 16
x--;      // x = 15
x--;      // x = 14
```

---

## 9. Type Casting

Converts one type to another for a calculation:

```cpp
int x = 7;
int y = 2;

std::cout << x / y          << "\n";   // 3   (integer division)
std::cout << (double)x / y  << "\n";   // 3.5 (type cast to double)
```

`(double)x` means "treat x as a double just for this calculation." The variable `x` itself stays an `int`.

---

## Quick Reference Card

```cpp
#include <iostream>

int main() {
    // declaring variables
    int    age        = 20;
    double height     = 5.6;
    bool   isLearning = true;
    char   grade      = 'A';

    // arithmetic
    int x = 5, y = 2;
    std::cout << x + y          << "\n";   // 7
    std::cout << x - y          << "\n";   // 3
    std::cout << x * y          << "\n";   // 10
    std::cout << x / y          << "\n";   // 2  (integer division!)
    std::cout << x % y          << "\n";   // 1  (remainder)
    std::cout << (double)x / y  << "\n";   // 2.5 (type cast fix)

    // shorthand operators
    x += 5;   // x = 7
    x++;      // x = 8
    x--;      // x = 7

    return 0;
}
```

---

## Python vs C++ — Variables

```python
# Python — no type needed
x = 42
height = 5.6
is_learning = True
grade = 'A'
```

```cpp
// C++ — type required
int    x          = 42;
double height     = 5.6;
bool   isLearning = true;
char   grade      = 'A';
```

---

## Day 2 Exercises Completed ✅

1. Declared and printed `int`, `double`, `bool`, `char` variables
2. Discovered `true` prints as `1` and `false` as `0`
3. Used all 5 arithmetic operators
4. Discovered integer division (`5/2 = 2` not `2.5`)
5. Used modulo operator and understood remainder
6. Reassigned a variable after declaration
7. Understood copy by value — variables don't link to each other
8. Used shorthand operators `+=`, `-=`, `*=`, `/=`, `%=`
9. Used increment `++` and decrement `--`
10. Fixed integer division using type casting `(double)`

---

*Next: Day 3 — Control Flow: if/else, loops, switch (April 24)*