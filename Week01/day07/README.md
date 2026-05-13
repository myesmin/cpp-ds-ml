# Day 7 — Review, ML Project & Interview Prep
**Date:** May 5–8, 2026  
**Goal:** Apply all Week 1 concepts in a real project, CUNY practice problems, and interview coding session

---

## What We Built Today

Day 7 had three parts:

```
Part 1 → ML Data Pipeline Analyzer (guided)
Part 2 → Student Grade Analyzer (solo!)
Part 3 → CUNY Practice Problems
Part 4 → Interview Coding Session
```

---

## Part 1 — ML Data Pipeline Analyzer

A real ML model performance report built using every concept from Week 1.

```cpp
double scores[10] = {85.5, 90.2, 78.3, 92.1, 88.0, 76.4, 95.0, 89.3, 84.7, 91.5};
```

Output:
```
=== ML Model Performance Report ===
Mean accuracy: 87.1%
Best model: 95%
Worst model: 76.4%
Range: 18.6%
Models above 80%: 8
Pass rate: 80%
===================================
```

### Functions written:
```cpp
double calcMean(double scores[], int size)
double calcMax(double scores[], int size)
double calcMin(double scores[], int size)
double calcRange(double scores[], int size)
int countAbove(double scores[], int size, double threshold)
double calcPassRate(double scores[], int size, double threshold)
void printReport(std::string label, double value)  // prints with %
void printReport(std::string label, int value)     // prints without %
```

### Key engineering decisions:
```
calcRange calls calcMax and calcMin   →  reuse, no duplication
calcPassRate calls countAbove         →  reuse, no duplication
two printReport functions             →  function overloading
```

---

## Part 2 — Student Grade Analyzer (Solo Project)

Built completely from scratch without looking at the ML project!

```cpp
double scores[10] = {72.5, 88.0, 65.3, 91.2, 78.6, 85.0, 55.8, 93.4, 70.1, 82.7};
```

Output:
```
=== Student Grade Report ===
Class average: 78.26%
Highest score: 93.4%
Lowest score: 55.8%
Score Range: 37.6%
Students passing (>=60%): 9
Pass rate: 90%
============================
```

---

## Part 3 — CUNY Practice Problems

### Problem 1 — Reverse Print
Print array backwards using a reverse loop:
```cpp
void reversePrint(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
```
Key insight:
```
forward: i = 0,      i < size,  i++
reverse: i = size-1, i >= 0,    i--
```

### Problem 2 — Palindrome Check
```cpp
bool isPalindrome(std::string word) {
    int len = word.length();
    for (int i = 0; i < len/2; i++) {
        if (word[i] != word[len - 1 - i]) {
            return false;
        }
    }
    return true;
}
```
Key insight:
```
innocent until proven guilty
assume IS palindrome
return false on first mismatch
return true after loop
```

### Problem 3 — FizzBuzz
```cpp
void fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) std::cout << "FizzBuzz ";
        else if (i % 3 == 0)           std::cout << "Fizz ";
        else if (i % 5 == 0)           std::cout << "Buzz ";
        else                           std::cout << i << " ";
    }
    std::cout << "\n";
}
```
Key insight: check BOTH (15) FIRST, then individual conditions.

### Problem 4 — Grade Calculator
```cpp
void getGrade(double scores[], int size) {
    for (int i = 0; i < size; i++) {
        if (scores[i] >= 90)      std::cout << scores[i] << " → A\n";
        else if (scores[i] >= 80) std::cout << scores[i] << " → B\n";
        else if (scores[i] >= 70) std::cout << scores[i] << " → C\n";
        else if (scores[i] >= 60) std::cout << scores[i] << " → D\n";
        else                      std::cout << scores[i] << " → F\n";
    }
}
```

### Problem 5 — Count Duplicates
```cpp
int countDuplicates(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}
```
Key insight: `j = i + 1` avoids comparing element to itself.

---

## Part 4 — Interview Coding Session

### Problem 1 — Find Maximum ✅
```cpp
int findMax(int arr[], int size) {
    int max = arr[0];              // start at first element, NOT 0!
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}
```

### Problem 2 — Count Even Numbers ✅
```cpp
int countEven(int arr[], int size) {
    int count = 0;                 // start at 0 (counting pattern)
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) count++;
    }
    return count;
}
```

### Problem 3 — Factorial ✅
```cpp
int factorial(int n) {
    int result = 1;                // start at 1 (multiplication pattern)
    for (int i = n; i >= 1; i--) {
        result *= i;
    }
    return result;
}
// factorial(0) = 1 handled automatically — loop never runs!
```

### Problem 4 — Check Prime ✅
```cpp
bool isPrime(int n) {
    if (n <= 1) return false;      // special case
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;  // found divisor → not prime
    }
    return true;                   // nothing divided it → prime
}
```

### Problem 5 — Reverse String ✅
```cpp
std::string reverseString(std::string word) {
    int len = word.length();
    std::string result = "";
    for (int i = len - 1; i >= 0; i--) {
        result += word[i];
    }
    return result;
}
```

---

## Key Patterns Learned Today

### Counting vs Tracking:
```cpp
int count = 0;        // COUNTING  → always start at 0
int max   = arr[0];   // TRACKING  → always start at first element
int sum   = 0;        // SUMMING   → always start at 0
int result = 1;       // MULTIPLYING → always start at 1
```

### Function Overloading:
```cpp
void print(std::string label, double value) { }  // picks this for double
void print(std::string label, int value)    { }  // picks this for int
// C++ chooses based on type — same name, different parameters
```

### Engineering Principle — Don't Duplicate:
```cpp
// bad — same logic twice
double calcRange(...) {
    // loop to find max
    // loop to find min
}

// good — reuse existing functions
double calcRange(...) {
    return calcMax(...) - calcMin(...);  // one line!
}
```

---

## Interview Tips from Today

```
1. wrong code can give right answers by accident
   → always test with different inputs!

2. max = 0 is a common bug
   → always start max at arr[0], not 0

3. = vs == is a classic bug
   → one equals sets, two equals checks

4. j = i+1 in nested loops
   → avoids comparing element to itself

5. return immediately when found
   → don't keep looping after you have the answer
```

---

## Week 1 Complete! ✅

```
Day 1 → Hello World, compilation pipeline
Day 2 → Variables, data types, operators
Day 3 → Control flow, loops, switch
Day 4 → Functions, parameters, return types
Day 5 → Arrays, 2D arrays, strings
Day 6 → Pointers, memory, pass by reference
Day 7 → Projects, CUNY practice, interview prep
```

---

## Files in This Folder

```
project1.1.cpp          ← ML Data Pipeline Analyzer
project1.2.cpp          ← Student Grade Analyzer (solo)
cuny_practice.cpp       ← CUNY practice problems 1-5
problemset1.cpp         ← 10 practice problems (your workspace)
problemset1solutions.cpp ← solutions with explanations
README.md               ← this file
```

---

*Next: Week 2 — std::vector, classes, and deeper data structures*
