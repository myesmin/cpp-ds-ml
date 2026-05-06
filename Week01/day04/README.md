# Day 4 — Functions
**Date:** April 25, 2026  
**Goal:** Write your own functions, understand parameters, return types, and build a mini ML program
 
---
 
## 1. Why Functions?
 
Functions give your code structure, reusability, and clarity. Instead of repeating the same code over and over, you write it once and call it whenever you need it.
 
Without functions — messy, repeated code:
```cpp
double trainAcc = (double)90 / 100;
std::cout << "Train accuracy: " << trainAcc << "\n";
 
double testAcc = (double)82 / 100;
std::cout << "Test accuracy: " << testAcc << "\n";
```
 
With functions — clean, reusable:
```cpp
double accuracy(int correct, int total) {
    return (double)correct / total;
}
 
printResult("Train accuracy", accuracy(90, 100));
printResult("Test accuracy",  accuracy(82, 100));
```
 
Three reasons functions matter:
```
1. Reusability   →  write once, use many times
2. Structure     →  breaks big problems into small pieces
3. Readability   →  code is easier to understand
```
 
---
 
## 2. Function Structure
 
Every function follows this pattern:
 
```cpp
returnType functionName(parameters) {
    // code goes here
    return value;
}
```
 
Breaking it down:
```
int   add  (int a, int b)  { return a + b; }
↑      ↑        ↑
return name   inputs
type        (parameters)
```
 
- `int` — return type (what comes OUT)
- `add` — name of the function
- `(int a, int b)` — parameters (inputs)
- `{ }` — body (the code)
- `return` — sends the result back to the caller
---
 
## 3. Parameters vs Arguments
 
This is a common interview question!
 
```cpp
int add(int a, int b)   ←  a and b are PARAMETERS
    add(3, 4)           ←  3 and 4 are ARGUMENTS
```
 
```
parameters  =  placeholders in the function definition
arguments   =  real values passed when calling the function
```
 
---
 
## 4. Return Types
 
```cpp
int    add()       // returns a whole number
double accuracy()  // returns a decimal
bool   isReady()   // returns true or false
void   print()     // returns NOTHING
```
 
How to choose:
```
"What does this function give back?"
 
A whole number?  →  int
A decimal?       →  double
Yes or no?       →  bool
Nothing at all?  →  void
```
 
---
 
## 5. void Functions
 
`void` means the function does something but gives NOTHING back:
 
```cpp
void printResult(std::string label, double value) {
    std::cout << label << ": " << value << "\n";
    // no return needed!
}
```
 
`void` is used when the function just DOES something — like printing. You don't need a result back.
 
---
 
## 6. How Functions Work Together
 
Exact step by step execution of the mini ML program:
 
```
main() starts
│
├── calls accuracy(90, 100)
│       │
│       └── calculates (double)90/100 = 0.9
│           returns 0.9 back to main()
│
├── stores 0.9 in trainAcc
│
├── calls accuracy(82, 100)
│       │
│       └── calculates (double)82/100 = 0.82
│           returns 0.82 back to main()
│
├── stores 0.82 in testAcc
│
├── calls calcLoss(0.9, 1.0)
│       │
│       └── calculates abs(0.9 - 1.0) = 0.1
│           returns 0.1 back to main()
│
├── stores 0.1 in trainLoss
│
├── calls calcLoss(0.8, 1.0)
│       │
│       └── calculates abs(0.8 - 1.0) = 0.2
│           returns 0.2 back to main()
│
├── stores 0.2 in testLoss
│
├── calls printResult("Train accuracy", 0.9)
│       │
│       └── prints "Train accuracy: 0.9"
│           returns NOTHING
│
├── calls printResult("Test accuracy", 0.82)
│       │
│       └── prints "Test accuracy: 0.82"
│           returns NOTHING
│
├── calls printResult("Train loss", 0.1)
│       │
│       └── prints "Train loss: 0.1"
│           returns NOTHING
│
└── calls printResult("Test loss", 0.2)
        │
        └── prints "Test loss: 0.2"
            returns NOTHING
 
main() ends → return 0 → tells OS "all good"
```
 
Think of main() as the manager:
```
main()          =  the manager (gives orders, coordinates everything)
accuracy()      =  calculates and GIVES BACK a value
calcLoss()      =  calculates and GIVES BACK a value
printResult()   =  does something, gives back NOTHING (void)
```
 
---
 
## 7. `#include <cmath>` — Math Functions
 
Just like `#include <iostream>` gives you `cout`, `#include <cmath>` gives you math tools:
 
```cpp
#include <cmath>
 
abs(x)     →  absolute value  abs(-0.1) = 0.1
sqrt(x)    →  square root     sqrt(9)   = 3
pow(x, n)  →  power           pow(2, 3) = 8
```
 
---
 
## 8. Mini ML Program — Built from Scratch
 
```cpp
#include <iostream>
#include <cmath>
 
double accuracy(int correct, int total) {
    return (double)correct / total;
}
 
double calcLoss(double predicted, double actual) {
    return abs(predicted - actual);
}
 
void printResult(std::string label, double value) {
    std::cout << label << ": " << value << "\n";
}
 
int main() {
    double trainAcc  = accuracy(90, 100);
    double testAcc   = accuracy(82, 100);
    double trainLoss = calcLoss(0.9, 1.0);
    double testLoss  = calcLoss(0.8, 1.0);
 
    printResult("Train accuracy", trainAcc);
    printResult("Test accuracy",  testAcc);
    printResult("Train loss",     trainLoss);
    printResult("Test loss",      testLoss);
 
    return 0;
}
```
 
Output:
```
Train accuracy: 0.9
Test accuracy: 0.82
Train loss: 0.1
Test loss: 0.2
```
 
---
 
## Quick Reference Card
 
```cpp
// function with return value
double accuracy(int correct, int total) {
    return (double)correct / total;
}
 
// void function — no return
void printResult(std::string label, double value) {
    std::cout << label << ": " << value << "\n";
}
 
// calling functions
double result = accuracy(90, 100);   // stores return value
printResult("Accuracy", result);     // void — nothing stored
```
 
---
 
## Python vs C++ — Functions
 
```python
# Python
def accuracy(correct, total):
    return correct / total
 
def print_result(label, value):
    print(f"{label}: {value}")
```
 
```cpp
// C++
double accuracy(int correct, int total) {
    return (double)correct / total;
}
 
void printResult(std::string label, double value) {
    std::cout << label << ": " << value << "\n";
}
```
 
Key differences:
```
Python  →  no type declarations needed
C++     →  must declare return type AND parameter types
Python  →  no void (just omit return)
C++     →  void explicitly says "returns nothing"
```
 
---
 
## Interview Questions You Can Now Answer ✅
 
**"What is a function?"**
> A reusable block of code that takes inputs, does something, and optionally returns a result. Functions avoid repetition, add structure, and make code readable.
 
**"What's the difference between parameters and arguments?"**
> Parameters are the placeholders defined in the function. Arguments are the actual values passed when calling it.
 
**"What is a void function?"**
> A function that performs an action but returns nothing. Used when you just want to DO something without needing a result back.
 
---
 
## Day 4 Exercises Completed ✅
 
1. Wrote first function — `add(int a, int b)`
2. Understood parameters vs arguments
3. Used void function for printing
4. Used `#include <cmath>` and `abs()`
5. Built a full mini ML report program from scratch
6. Connected multiple functions together in main()
---
 
*Next: Day 5 — Arrays & Strings (April 26)*