# Day 1 — C++ Foundations

**Date:** April 22, 2026  
**Goal:** Hello World, compilation pipeline, basic syntax

---

## 1. The Compilation Pipeline

Unlike Python (which runs directly), C++ code goes through multiple stages before it runs:

```
your code       preprocessor      compiler        linker        executable
main.cpp    →   expands         →  .o file     →  combines   →  ./app
                #include                           libraries
```

One command does all of this:

```bash
g++ main.cpp -o app && ./app
```

Breaking it down:

- `g++` — calls the compiler
- `main.cpp` — your source code file
- `-o app` — name the output file "app" (output)
- `&&` — "if that worked, then..."
- `./app` — run the compiled program (`./` = look in current folder)

---

## 2. Your First Program

```cpp
#include <iostream>

int main() {
    std::cout << "Hello!" << "\n";
    return 0;
}
```

### Breaking it down line by line:


| Line                    | What it means                                             |
| ----------------------- | --------------------------------------------------------- |
| `#include <iostream>`   | Bring in the input/output tools (like `import` in Python) |
| `int main()`            | Entry point — every C++ program starts here               |
| `std::cout << "Hello!"` | Print "Hello!" to the screen                              |
| `<< "\n"`               | Move to a new line                                        |
| `return 0;`             | Tell the OS "everything went fine"                        |


---

## 3. `#include <iostream>`

- Called a **header file**
- `iostream` = **input/output stream**
- Without it, `cout` and `cin` don't exist
- Like Python's `import`:

```python
import numpy        # Python
```

```cpp
#include <iostream> // C++
```

Other common header files you'll use later:

```cpp
#include <cmath>    // math: sqrt, pow
#include <string>   // text/string tools
#include <vector>   // lists (like Python lists)
```

---

## 4. `int main()` — The Entry Point

- **Every single C++ program must have exactly one `main()`**
- The computer looks for `main()` first and starts there
- It is a **function** (you can tell by the `()`)
- Think of it as the front door of your program

Breaking down the structure:

```
int    main()   { }
↑       ↑        ↑
return  name    body
type            (code goes here)
```

- `int` — return type (gives back a whole number)
- `main` — name of the function
- `()` — where inputs go (empty for now)
- `{ }` — the body, where all your code lives

---

## 5. `std::cout` — Printing

- `std` = **standard** library (a toolbox built into C++)
- `::` = **"inside"** (accessing something inside the toolbox)
- `cout` = **character output** (pronounced **"see-out"**)
- `<<` = insertion operator — sends data to `cout`

Other tools in `std`:

```cpp
std::cout   →   print something (character output)
std::cin    →   read something  (character input, "see-in")
std::endl   →   end line        (pronounced "end-el")
```

---

## 6. New Lines — `"\n"` vs `std::endl`

Both move to the next line. Key differences:


|                   | `"\n"`   | `std::endl`               |
| ----------------- | -------- | ------------------------- |
| What it does      | new line | new line + flushes buffer |
| Speed             | faster   | slower                    |
| Industry standard | ✅ yes    | rarely used               |


**Always use `"\n"` — it's the industry standard.**

```cpp
std::cout << "Line 1" << "\n";   // ✅ preferred
std::cout << "Line 2" << "\n";
```

Without `"\n"`, everything runs together on one line:

```cpp
std::cout << "Hello";
std::cout << "World";
// prints: HelloWorld%
```

---

## 7. `return 0` — Exit Code

```cpp
return 0;   // tells the OS: "program ran fine"
return 1;   // tells the OS: "something went wrong"
```

**Important distinction:**

```cpp
int main() {
    std::cout << "Hello!" << "\n";   // YOU see this (your screen)
    return 0;                         // COMPUTER gets this (OS)
}
```

- `cout` → communicates with **you** (prints to screen)
- `return 0` → communicates with the **operating system**

Think of it like a chef in a restaurant:

```
cout      =  food that goes to the customer (you see it)
return 0  =  chef telling the manager "job done, no problems"
```

In modern C++(`C++11`and later),`return 0` is added automatically by the compiler if you forget it — but **always write it anyway** as good habit.

---

## 8. Return Types

Every function declares what type of value it gives back:

```cpp
int     main()   // returns a whole number   → 0, 42, -5
double  area()   // returns a decimal        → 3.14, 9.81
bool    isEven() // returns true or false    → true, false
char    grade()  // returns a single letter  → 'A', 'B', 'C'
void    print()  // returns NOTHING          → no return needed
```

How to choose a return type:

```
"What does this function give back?"

A whole number?    →  int
A decimal?         →  double
Yes or no?         →  bool
A single letter?   →  char
Nothing at all?    →  void
```

For DS/AI/ML you'll use mostly:

```
int     →  counting things, loop counters, indices
double  →  accuracy, loss, weights, any math
bool    →  conditions, flags (is training done?)
void    →  functions that just DO something, return nothing
```

---

## 9. What is a Function?

`main()` is your first function! Every function in C++ follows this pattern:

```cpp
returnType functionName() {
    // code goes here
    return value;
}
```

`main()` is special — the computer calls it automatically when your program starts. Every other function you have to call yourself (Day 4).

---

## 10. Python vs C++ — Key Difference

```python
print("Hello!")          # Python — one line, hides everything
```

```cpp
#include <iostream>
int main() {
    std::cout << "Hello!" << "\n";
    return 0;
}
```

C++ is more verbose but gives you full control. Think of it like:

```
Python  =  automatic car  (easier, less control)
C++     =  manual car     (more work, more power and speed)
```

**Why this matters for AI/ML:**  
PyTorch, TensorFlow, NumPy — all written in C++under the hood. Python is just the friendly face on top. When you train a neural network in Python, C++ is doing the actual heavy lifting.

---

## 11. Compiler — What You're Using

- **Your compiler:** Apple Clang 17.0.0
- **Your chip:** Apple Silicon (arm64 = M1/M2/M3)
- When you type `g++` on Mac, it actually calls Apple Clang behind the scenes

```
g++  →  (on Mac)  →  Apple Clang
```

---

## Quick Reference Card

```cpp
#include <iostream>     // always needed for cout/cin

int main() {            // entry point, always required
    
    // printing
    std::cout << "text" << "\n";
    
    // multiple lines
    std::cout << "line 1" << "\n";
    std::cout << "\n";              // blank line
    std::cout << "line 2" << "\n";
    
    // chaining on one line
    std::cout << "C++" << "\n" << "C++" << "\n" << "C++" << "\n";
    
    return 0;           // always return 0 from main
}
```

---

## Compile & Run Commands

```bash
g++ main.cpp -o app      # compile only
./app                    # run only
g++ main.cpp -o app && ./app   # compile AND run (use this)
ls                       # list files in folder
pwd                      # show current folder path
```

---

## Day 1 Exercises Completed ✅

1. Printed "Hello, Mohona!"
2. Changed output and recompiled
3. Used multiple `cout` lines with blank lines
4. Printed target output with exact formatting
5. Printed "C++\nC++\nC++" using ONE `cout` line

---

*Next: Day 2 — Variables, Data Types & Operators (April 23)*