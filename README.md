# C++ for AI/ML Engineering

A structured, week-by-week C++ learning repo focused on data science, machine learning, and systems programming — built toward FAANG-level interview readiness.

---

## Goals

- Build deep C++ fluency from first principles
- Connect C++ mechanics to Python/ML concepts (NumPy, PyTorch internals, etc.)
- Develop the ability to read, extend, and explain large codebases
- Prepare for technical interviews at top ML/systems companies

---

## Repo Structure

```
C++/
├── week01/
│   ├── day01/   # Compilation pipeline, core syntax, data types
│   ├── day02/   # Operators, control flow (if/else, loops, switch)
│   ├── day03/   # Functions, scope, mini ML report program
│   ├── day04/   # Arrays, 2D arrays/matrices, std::string
│   ├── day05/   # std::vector preview, string operations
│   ├── day06/   # Pointers, references, pass-by-value vs pointer
│   └── day07/   # ML Data Pipeline Analyzer project + interview prep
├── week02/
│   └── ...      # std::vector, data structures
└── ...
```

Each day folder contains:

- Source files (`.cpp`)
- A `README.md` covering concepts, key takeaways, and exercises

---

## Primary Textbook

**C++ Primer (5th Edition)** — Lippman, Lajoie, Moo

> [📖 Online PDF](https://zhjwpku.com/assets/pdf/books/C++.Primer.5th.Edition_2013.pdf)

Studied chapter-by-chapter alongside [NotebookLM](https://notebooklm.google.com/) for audio overviews, mind maps, and interactive Q&A.

---

## Key Resources


| Resource              | Purpose                                          | Link                                                   |
| --------------------- | ------------------------------------------------ | ------------------------------------------------------ |
| cppreference.com      | Definitive C++ standard reference                | [cppreference.com](https://en.cppreference.com)        |
| LearnCpp.com          | Best free structured C++ curriculum              | [learncpp.com](https://www.learncpp.com)               |
| Compiler Explorer     | See C++ compile to assembly in real time         | [godbolt.org](https://godbolt.org)                     |
| NeetCode 150          | Curated interview problem set with C++ solutions | [neetcode.io](https://neetcode.io)                     |
| LeetCode              | Primary interview prep — all solutions in C++    | [leetcode.com](https://leetcode.com)                   |
| CppCon Back to Basics | One-concept-per-video YouTube talks              | [youtube.com/@CppCon](https://www.youtube.com/@CppCon) |


---

## Tools & Setup

- **IDE:** Cursor on Apple Silicon Mac (Apple Clang 17.0.0)
- **Compile flags:** `g++ -std=c++20 -Wall -Wextra -fsanitize=address,undefined -O2`
- **Version control:** GitHub

---

## Focus Areas

- **Data Structures:** arrays, vectors, hash maps, trees, graphs, heaps
- **Algorithms:** sorting, searching, dynamic programming, graph traversal
- **ML/Systems:** matrix ops, tensor internals, memory layout, performance profiling
- **Libraries (upcoming):** Eigen, libtorch, ONNX Runtime

---

## Interview Prep

Solving problems from the **NeetCode 150** and **Blind 75** sets in C++, following the FAANG interview process checklist:

1. Think out loud before typing — state brute force first, then optimize
2. Clarify constraints — input size, edge cases, duplicates
3. Name the pattern — sliding window, two pointers, BFS, DP, etc.
4. State time/space complexity unprompted
5. Test edge cases out loud — empty input, single element, overflow

---

*Built with C++11 through C++20 | Python/ML background* 