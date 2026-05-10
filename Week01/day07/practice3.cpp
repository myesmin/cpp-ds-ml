/*
=================================================
Practice Problem 3 — FizzBuzz
=================================================

Write a function:
    void fizzBuzz(int n)

Rules:
- loop from 1 to n
- if number divisible by both 3 AND 5 → print "FizzBuzz"
- if number divisible by 3 only       → print "Fizz"
- if number divisible by 5 only       → print "Buzz"
- otherwise                           → print the number

Call with n = 20.

Expected output:
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz

Hints:
- % operator checks divisibility (Day 2!)
- check BOTH (3 AND 5) FIRST before checking individually
- use if / else if / else (Day 3!)
- print with " " space after each, not "\n"
=================================================
*/