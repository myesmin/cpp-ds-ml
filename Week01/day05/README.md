# Day 5 — Arrays & Strings
**Date:** May 5, 2026  
**Goal:** Understand arrays, 2D arrays, loops with arrays, and strings — the foundation of matrices and tensors in ML

---

## 1. Arrays

An array stores multiple values of the SAME type in one variable.

```python
# Python
scores = [85, 90, 78, 92, 88]
```

```cpp
// C++
int scores[5] = {85, 90, 78, 92, 88};
```

Breaking it down:
```
int    scores  [5]   =  {85, 90, 78, 92, 88};
↑        ↑      ↑              ↑
type    name   size          values
```

---

## 2. Array Indexing

Arrays always start at index `0`:

```cpp
int scores[5] = {85, 90, 78, 92, 88};

scores[0]  →  85   (first element)
scores[1]  →  90
scores[2]  →  78
scores[3]  →  92
scores[4]  →  88   (last element)
```

```
size = 5
first index = 0
last index  = 4  (always size - 1)
```

### ⚠️ Out of bounds bug:
```cpp
scores[5]   // ❌ doesn't exist! valid range is 0-4
```
No error message — just garbage values or a crash. Very common C++ bug!

---

## 3. Arrays + Loops

Processing every element with a loop:

```cpp
int scores[5] = {85, 90, 78, 92, 88};

for (int i = 0; i < 5; i++) {
    std::cout << scores[i] << "\n";
}
// prints: 85, 90, 78, 92, 88
```

This is how ML processes entire datasets:
```cpp
for (int i = 0; i < 1000; i++) {
    process(data[i]);   // process each sample
}
```

---

## 4. Sum & Average Calculator

This is what `np.mean()` does under the hood in NumPy:

```cpp
#include <iostream>
#include <string>

void printResult(std::string label, double value) {
    std::cout << label << ": " << value << "\n";
}

int main() {
    int scores[5] = {85, 90, 78, 92, 88};
    double sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }

    double avg = sum / 5;

    printResult("Sum", sum);        // Sum: 433
    printResult("Average", avg);    // Average: 86.6

    return 0;
}
```

Key pattern:
```
declare sum = 0       →  before the loop
sum += scores[i]      →  inside the loop
avg = sum / size      →  after the loop
```

---

## 5. 2D Arrays — Matrices

A 2D array has rows AND columns — this is how matrices work in ML:

```cpp
int matrix[2][3] = {
    {1, 2, 3},   // row 0
    {4, 5, 6}    // row 1
};
```

```
         col0  col1  col2
row 0  →   1     2     3
row 1  →   4     5     6
```

Accessing elements:
```cpp
matrix[0][0]  →  1   (row 0, col 0)
matrix[0][2]  →  3   (row 0, col 2)
matrix[1][1]  →  5   (row 1, col 1)
```

### Looping through a matrix:

```cpp
for (int row = 0; row < 2; row++) {
    for (int col = 0; col < 3; col++) {
        std::cout << matrix[row][col] << " ";
    }
    std::cout << "\n";
}
```

Output:
```
1 2 3
4 5 6
```

This is EXACTLY how PyTorch and NumPy display matrices!

---

## 6. Static Arrays vs std::vector

```
static array  →  fixed size, must know upfront
std::vector   →  dynamic size, grows automatically
```

```cpp
int scores[5];              // static — size fixed at 5

#include <vector>
std::vector<double> data;   // dynamic — grows as needed
data.push_back(85.0);       // add items one by one
```

For ML/DS:
```
static array  →  used inside ML kernels, fixed operations
std::vector   →  used for datasets, feature lists (Week 2!)
```

---

## 7. std::string

```cpp
#include <string>

std::string name = "Mohona";

name.length()          // 6 — number of characters
name[0]                // 'M' — first character
name + " learning"     // "Mohona learning" — concatenation
```

### Important — spaces count as characters:
```cpp
std::string full = "Mohona DS";
full.length()   // 9 — space counts!
```

### `.length()` is a method:
```cpp
name.length()   // dot = accessing a tool INSIDE the string object
```

---

## 8. Common Bugs to Watch For

```cpp
// Bug 1 — semicolon inside array
int matrix[2][3] = {
    {1, 2, 3};    // ❌ semicolon — should be comma
    {4, 5, 6}
};

// Bug 2 — out of bounds
int scores[5] = {85, 90, 78, 92, 88};
scores[5]     // ❌ valid range 0-4 only

// Bug 3 — missing #include
std::string name = "Mohona";   // ❌ needs #include <string>
```

---

## Quick Reference Card

```cpp
#include <iostream>
#include <string>

int main() {
    // 1D array
    int scores[5] = {85, 90, 78, 92, 88};
    std::cout << scores[0] << "\n";   // 85

    // loop through array
    for (int i = 0; i < 5; i++) {
        std::cout << scores[i] << "\n";
    }

    // sum and average
    double sum = 0;
    for (int i = 0; i < 5; i++) { sum += scores[i]; }
    double avg = sum / 5;

    // 2D array
    int matrix[2][3] = {{1,2,3},{4,5,6}};
    std::cout << matrix[1][2] << "\n";   // 6

    // nested loop for matrix
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            std::cout << matrix[r][c] << " ";
        }
        std::cout << "\n";
    }

    // string
    std::string name = "Mohona";
    std::cout << name.length() << "\n";   // 6

    return 0;
}
```

---

## ML/DS Connection

```
1D array   →  feature vector (one data sample)
2D array   →  matrix (dataset with rows=samples, cols=features)
loop+array →  how ML processes entire datasets
sum/avg    →  np.sum(), np.mean() under the hood
string     →  text features, labels, model names
```

---

## Python vs C++ — Arrays

```python
# Python
scores = [85, 90, 78, 92, 88]
matrix = [[1,2,3],[4,5,6]]
print(len("Mohona"))   # 6
```

```cpp
// C++
int scores[5] = {85, 90, 78, 92, 88};
int matrix[2][3] = {{1,2,3},{4,5,6}};
std::cout << std::string("Mohona").length();   // 6
```

---

## Day 5 Exercises Completed ✅

1. Declared and accessed 1D array elements
2. Used loop to print all array elements
3. Built sum and average calculator (np.mean() under the hood)
4. Declared and accessed 2D array (matrix)
5. Used nested loops to print full matrix
6. Used std::string with length() and concatenation
7. Spotted and fixed 3 types of array bugs

---

*Next: Day 6 — Pointers & Memory (May 5, 2026)*
