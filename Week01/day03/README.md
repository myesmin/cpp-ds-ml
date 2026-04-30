# Day 3 — Control Flow

**Date:** April 24, 2026  
**Goal:** Make decisions and repeat things using if/else, loops, and switch

---

## 1. if / else — Making Decisions

```cpp
if (condition) {
    // runs if condition is TRUE
} else {
    // runs if condition is FALSE
}
```

Example:

```cpp
int age = 15;

if (age >= 18) {
    std::cout << "You are an adult" << "\n";
} else {
    std::cout << "You are not an adult" << "\n";
}
// prints: You are not an adult
```

---

## 2. else if — Multiple Options

C++ checks from top to bottom and stops at the first true condition:

```cpp
int score = 75;

if (score >= 90) {
    std::cout << "Grade: A" << "\n";
} else if (score >= 80) {
    std::cout << "Grade: B" << "\n";
} else if (score >= 70) {
    std::cout << "Grade: C" << "\n";   // ← this runs
} else {
    std::cout << "Grade: F" << "\n";
}
```

```
is 75 >= 90?  NO  → skip
is 75 >= 80?  NO  → skip
is 75 >= 70?  YES → print "Grade: C" → stop checking
```

### Real ML example:

```cpp
double accuracy = 0.75;

if (accuracy >= 0.95) {
    std::cout << "Model is excellent" << "\n";
} else if (accuracy >= 0.80) {
    std::cout << "Model is good" << "\n";
} else if (accuracy >= 0.70) {
    std::cout << "Model needs improvement" << "\n";   // ← this runs
} else {
    std::cout << "Model is poor" << "\n";
}
```

---

## 3. Comparison Operators

```cpp
x == y   // equal to
x != y   // not equal to
x >  y   // greater than
x <  y   // less than
x >= y   // greater than or equal to
x <= y   // less than or equal to
```

### ⚠️ Common bug — `=` vs `==`:

```cpp
if (x = 5)    // ❌ WRONG — sets x to 5, doesn't compare!
if (x == 5)   // ✅ RIGHT — checks if x equals 5
```

```
=    →  one equals  → SET a value
==   →  two equals  → CHECK if equal
```

---

## 4. Logical Operators

Combine multiple conditions:

```cpp
&&   →  AND  — both must be true
||   →  OR   — at least one must be true
!    →  NOT  — flips true to false, false to true
```

### AND `&&` — both must be true:

```cpp
int age = 20;
bool hasID = true;

if (age >= 18 && hasID) {
    std::cout << "You can enter" << "\n";   // ✅ both true
}
```

### OR `||` — at least one must be true:

```cpp
int age = 15;
bool hasPermission = true;

if (age >= 18 || hasPermission) {
    std::cout << "You can enter" << "\n";   // ✅ one is true
}
```

### NOT `!` — flips the value:

```cpp
bool isRaining = false;

if (!isRaining) {                           // !false = true
    std::cout << "Go outside!" << "\n";    // ✅ this runs
}
```

```
!false  →  true
!true   →  false
```

---

## 5. for Loop

Use when you know exactly how many times to repeat:

```cpp
for (int i = 0; i < 5; i++) {
      ↑            ↑      ↑
    START        STOP    STEP
```

- `int i = 0` — start here (runs ONCE at beginning)
- `i < 5` — keep going while this is true (checked EVERY loop)
- `i++` — do this after every loop

### Full story step by step:

```
i = 0  →  0 < 5? YES → print 0 → i++ → i = 1
i = 1  →  1 < 5? YES → print 1 → i++ → i = 2
i = 2  →  2 < 5? YES → print 2 → i++ → i = 3
i = 3  →  3 < 5? YES → print 3 → i++ → i = 4
i = 4  →  4 < 5? YES → print 4 → i++ → i = 5
i = 5  →  5 < 5? NO  → STOP!
```

### You can change all three parts:

```cpp
for (int i = 1;  i <= 10; i++)    // start at 1, go to 10
for (int i = 0;  i < 10;  i+=2)  // step by 2 → 0,2,4,6,8
for (int i = 10; i > 0;   i--)   // count DOWN 10 to 1
```

---

## 6. while Loop

Use when you DON'T know how many times to repeat:

```cpp
int i = 0;          // start (outside the loop)
while (i < 5) {     // condition
    std::cout << i << "\n";
    i++;            // step (inside the loop)
}
```

### for vs while — same output, different use:

```cpp
// use FOR when count is known
for (int i = 0; i < 100; i++) {
    // process 100 training samples
}

// use WHILE when count is unknown
while (loss > 0.01) {
    // keep training until loss drops
    // could be 10 epochs or 1000!
}
```

### Analogy:

```
for loop    =  "do the dishes 10 times"      (you know the count)
while loop  =  "study until you understand"  (you don't know!)
```

---

## 7. break and continue

### break — stop the loop completely:

```cpp
for (int i = 0; i < 5; i++) {
    if (i == 3) {
        break;         // stop loop when i hits 3
    }
    std::cout << i << "\n";
}
// prints: 0, 1, 2
```

### continue — skip this iteration, keep going:

```cpp
for (int i = 0; i < 5; i++) {
    if (i == 3) {
        continue;      // skip 3, keep going
    }
    std::cout << i << "\n";
}
// prints: 0, 1, 2, 4
```

### Key difference:

```
break     →  STOP the loop completely
continue  →  SKIP this one, keep going
```

### Real ML examples:

```cpp
// break — stop training if loss is good enough
if (loss < 0.001) {
    break;
}

// continue — skip corrupted data samples
if (isBadData) {
    continue;
}
```

---

## 8. switch Statement

Cleaner way to write multiple `if/else` checks on the SAME variable:

```cpp
switch (variable) {
    case value1:
        // code
        break;       // ← always add this!
    case value2:
        // code
        break;       // ← always add this!
    default:
        // runs if nothing matched (like else)
}
```

Example:

```cpp
int day = 2;

switch (day) {
    case 1:
        std::cout << "Monday" << "\n";
        break;
    case 2:
        std::cout << "Tuesday" << "\n";   // ← this runs
        break;
    case 3:
        std::cout << "Wednesday" << "\n";
        break;
    default:
        std::cout << "Other day" << "\n";
}
```

### ⚠️ Fallthrough bug — always add break!

```cpp
// WITHOUT break — falls through to everything below!
switch (day) {
    case 2:
        std::cout << "Tuesday" << "\n";    // prints
    case 3:
        std::cout << "Wednesday" << "\n";  // also prints!
    default:
        std::cout << "Other day" << "\n";  // also prints!
}
// prints: Tuesday, Wednesday, Other day ❌
```

---

## Quick Reference Card

```cpp
#include <iostream>

int main() {
    // if / else if / else
    int score = 75;
    if (score >= 90)      { std::cout << "A" << "\n"; }
    else if (score >= 70) { std::cout << "C" << "\n"; }
    else                  { std::cout << "F" << "\n"; }

    // for loop
    for (int i = 0; i < 5; i++) {
        std::cout << i << "\n";   // 0,1,2,3,4
    }

    // while loop
    int i = 0;
    while (i < 5) {
        std::cout << i << "\n";   // 0,1,2,3,4
        i++;
    }

    // break and continue
    for (int i = 0; i < 5; i++) {
        if (i == 3) break;        // stops at 3
        std::cout << i << "\n";
    }

    for (int i = 0; i < 5; i++) {
        if (i == 3) continue;     // skips 3
        std::cout << i << "\n";
    }

    return 0;
}
```

---

## Day 3 Exercises Completed ✅

1. Used if/else to check age
2. Used else if to grade a score
3. Applied if/else to ML accuracy thresholds
4. Used comparison operators ==, !=, >, <, >=, <=
5. Used logical operators &&, ||, !
6. Understood = (assignment) vs == (comparison)
7. Wrote for loop starting at 0 and at 1
8. Wrote while loop — same output as for loop
9. Used break to stop a loop
10. Used continue to skip one iteration
11. Used switch statement with break
12. Discovered fallthrough bug without break

---

*Next: Day 4 — Functions (April 25)*