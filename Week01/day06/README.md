# Day 6 — Pointers & Memory

**Date:** May 5, 2026  
**Goal:** Understand memory addresses, pointers, dereferencing, and pass by value/pointer/reference

---

## 1. How Memory Works

Every variable lives somewhere in your computer's RAM. When you write:

```cpp
int x = 42;
```

Your computer:

1. Finds a free spot in memory
2. Stores 42 there
3. Every spot has a unique **address** — like a house number

```
normal variable  →  stores a VALUE     (42)
pointer          →  stores an ADDRESS  (where 42 lives)
```

---

## 2. The Address-of Operator `&`

`&` gives you the memory address of a variable:

```cpp
int x = 42;
std::cout << x  << "\n";   // prints 42         (the value)
std::cout << &x << "\n";   // prints 0x16f126bc8 (the address)
```

The address looks like `0x16f126bc8` — hexadecimal format. Everyone gets a different address because your OS puts variables in different locations each run.

---

## 3. Pointers

A pointer is a variable that stores a memory address:

```cpp
int x = 42;
int* p = &x;    // p stores the ADDRESS of x
```

Four things you can do:

```cpp
int x = 42;
int* p = &x;

x    →  42              // value of x
&x   →  0x16f126bc8    // address of x
p    →  0x16f126bc8    // p stores the same address as &x
*p   →  42             // go to that address, get the value
```

### The operators:

```
&   →  address-of    "give me the address"
*   →  dereference   "go to the address, get the value"
```

### Memory analogy:

```
x    =  what's INSIDE the house (42)
&x   =  the GPS coordinates of the house
p    =  a piece of paper with the coordinates written on it
*p   =  actually GOING to the house and seeing what's inside
```

---

## 4. Declaring Pointers

```cpp
int* p = &x;   // ✅ modern C++ style — preferred
int *p = &x;   // same thing, older C style
```

### ⚠️ Multiple pointers on one line:

```cpp
int* p1, p2;    // ❌ p1 is pointer, p2 is just int!
int* p1, *p2;   // ✅ both are pointers
```

Rule: **declare one pointer per line.**

---

## 5. Changing Values Through Pointers

```cpp
int x = 42;
int* p = &x;

*p = 100;   // go to x's address, change value to 100

std::cout << x  << "\n";   // 100 — x changed!
std::cout << *p << "\n";   // 100 — same memory location
```

`p` and `x` share the same address — changing one changes both:

```
x  →  lives at 0x16dbcebc8
p  →  points to 0x16dbcebc8

*p = 100  →  changes value at 0x16dbcebc8 to 100
x         →  also at 0x16dbcebc8 → also 100!
```

---

## 6. Pass by Value vs Pointer vs Reference

This is one of the most important concepts in C++ for ML/DS.

### Pass by Value — gets a COPY:

```cpp
void addTen(int x) {
    x += 10;    // only changes the copy
}

int main() {
    int num = 5;
    addTen(num);
    std::cout << num << "\n";   // still 5! original unchanged
}
```

```
main()  num = 5
        │
        └── addTen(num) → copy = 5 → copy becomes 15
                          copy disappears when function ends
        │
        num still = 5   ← original never changed!
```

### Pass by Pointer — gets ADDRESS, changes original:

```cpp
void addTen(int* p) {
    *p += 10;   // go to address, change value there
}

int main() {
    int num = 5;
    addTen(&num);              // pass address of num
    std::cout << num << "\n";  // 15! original changed
}
```

```
main()  num = 5
        │
        └── addTen(&num) → p = address of num
                           *p += 10 → changes num directly!
        │
        num = 15   ← original changed!
```

### Pass by Reference — alias, cleanest syntax:

```cpp
void addTen(int& x) {   // x IS num, not a copy
    x += 10;            // directly changes original
}

int main() {
    int num = 5;
    addTen(num);               // no & needed when calling
    std::cout << num << "\n";  // 15! original changed
}
```

---

## 7. Choosing Which to Use

```
by value      →  small data, don't want to change original
by pointer    →  need to change original, working with arrays
by reference  →  need to change original, cleaner than pointer
```

### For ML/DS specifically:

```
large datasets    →  ALWAYS pass by pointer or reference
                     never copy millions of numbers!
model weights     →  pass by pointer to modify in place
small int/double  →  pass by value is fine
```

---

## 8. Why Pointers Matter for ML

```
Python NumPy array     →  looks simple, hides memory management
C++ tensor (libtorch)  →  you control exactly where data lives

Training a neural net:
weights = millions of numbers in memory
C++ lets you say exactly WHERE they live
→ GPU memory, CPU cache, RAM
Python just lets you USE them
→ C++ underneath does the real work
```

```
Python  →  "here's a value, I'll manage memory for you"
C++     →  "here's the actual address, YOU manage it"
```

---

## Quick Reference Card

```cpp
#include <iostream>

int main() {
    int x = 42;
    int* p = &x;

    std::cout << x   << "\n";   // 42              value
    std::cout << &x  << "\n";   // 0x16f126bc8     address
    std::cout << p   << "\n";   // 0x16f126bc8     same address
    std::cout << *p  << "\n";   // 42              value via pointer

    *p = 100;
    std::cout << x   << "\n";   // 100  changed through pointer!
    std::cout << *p  << "\n";   // 100  same memory location

    return 0;
}
```

---

## Interview Questions You Can Now Answer ✅

**"What is a pointer?"**

> A variable that stores a memory address instead of a value. It lets you directly access and modify data at a specific location in memory.

**"What is the difference between & and * in C++?"**

> `&` is the address-of operator — gives you the memory address of a variable. `*` is the dereference operator — goes to a memory address and gets the value stored there.

**"What is pass by reference vs pass by value?"**

> Pass by value gives the function a copy — the original is unchanged. Pass by reference gives the function direct access to the original variable — changes affect the original. Pass by reference is critical for performance when working with large data structures.

**"Why are pointers important in ML engineering?"**

> ML models work with massive datasets and weight matrices. Pointers let you work directly on data in memory without copying it — essential for performance. PyTorch and NumPy tensors are built on pointers under the hood.

---

## Python vs C++ — Memory

```python
# Python — memory is hidden from you
x = 42
x = 100   # just reassign, no memory control
```

```cpp
// C++ — you control memory directly
int x = 42;
int* p = &x;
*p = 100;   // change x through its memory address
```

---

## Day 6 Exercises Completed ✅

1. Printed value and address of a variable using `&`
2. Created a pointer with `int* p = &x`
3. Used `*p` to read value at an address
4. Changed a value through a pointer with `*p = 100`
5. Confirmed `x` and `*p` share the same memory location
6. Used pass by value — original unchanged
7. Used pass by pointer — original changed via `*p`
8. Used pass by reference — original changed, cleaner syntax

---

*Next: Day 7 — Review + ML Data Pipeline Project (May 5, 2026)*