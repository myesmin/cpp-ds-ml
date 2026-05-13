# Problem Set 1 — C++ Week 1 Practice

**Topics covered:** Arrays, loops, functions, strings, control flow, pointers

---

## Files

```
problemset1.cpp          ←  problems to solve (your workspace)
problemset1solutions.cpp ←  solutions with explanations (read AFTER attempting!)
README.md                ←  this file
```

---

## How to Use

**Step 1 — attempt problems yourself:**
```bash
cd week01/day07
g++ problemset1.cpp -o ps1 && ./ps1
```

**Step 2 — check solutions only after trying:**
```bash
g++ problemset1solutions.cpp -o ps1sol && ./ps1sol
```

---

## Problems Overview

| # | Problem | Concepts | Difficulty |
|---|---------|----------|------------|
| 1 | Sum of Array | loops, accumulator | ⭐ Easy |
| 2 | Count Negatives | loops, conditions | ⭐ Easy |
| 3 | Reverse Array In Place | two pointers, swap | ⭐⭐ Medium |
| 4 | Second Largest | tracking multiple values | ⭐⭐ Medium |
| 5 | Count Words | string traversal | ⭐⭐ Medium |
| 6 | Power Function | multiplication loop | ⭐ Easy |
| 7 | Array Contains | linear search | ⭐ Easy |
| 8 | Multiplication Table | nested output | ⭐ Easy |
| 9 | Count Uppercase | character comparison | ⭐⭐ Medium |
| 10 | ML Accuracy Classifier | if/else chain | ⭐ Easy |

---

## Key Patterns to Remember

**Counting:**
```cpp
int count = 0;        // always start at 0
count++;              // increment when condition met
```

**Summing:**
```cpp
int sum = 0;          // always start at 0
sum += arr[i];        // add each element
```

**Tracking max/min:**
```cpp
int max = arr[0];     // start at first element
if (arr[i] > max) max = arr[i];
```

**Two pointers:**
```cpp
int i = 0;
int j = size - 1;
while (i < j) { i++; j--; }
```

**Linear search:**
```cpp
for (int i = 0; i < size; i++) {
    if (arr[i] == target) return true;
}
return false;
```

---

## ML/DS Connection

```
Problem 1  →  np.sum() under the hood
Problem 4  →  finding top-2 model performance
Problem 7  →  checking if a feature exists in a dataset
Problem 10 →  model evaluation and deployment decisions
```

---

## Tips

```
✅ draw it on paper first before coding
✅ trace through manually with a small example
✅ test with edge cases (empty, negative, zero)
✅ try for 10 mins before looking at solutions
✅ after solving, read the solution anyway — there may be a cleaner way
```

---

*Part of C++ for DS/AI/ML — Week 1 Practice*
