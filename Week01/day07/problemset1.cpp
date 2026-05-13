// ================================================
// PROBLEM SET 1 — C++ Week 1 Practice
// ================================================
// Instructions:
// - Solve each problem in the space provided
// - Compile and run after each problem
// - Do NOT look at the solutions file until done!
// ================================================

#include <iostream>
#include <string>
using namespace std;


// ================================================
// PROBLEM 1 — Sum of Array
// ================================================
// Write a function:
//     int sumArray(int arr[], int size)
//
// That returns the sum of all elements in the array.
//
// Test with: {1, 2, 3, 4, 5}
// Expected output: Sum: 15
// ================================================

// YOUR CODE HERE:




// ================================================
// PROBLEM 2 — Count Negative Numbers
// ================================================
// Write a function:
//     int countNegative(int arr[], int size)
//
// That counts how many negative numbers are in the array.
//
// Test with: {3, -1, 4, -5, 2, -8, 7}
// Expected output: Negatives: 3
// ================================================

// YOUR CODE HERE:




// ================================================
// PROBLEM 3 — Reverse Array
// ================================================
// Write a function:
//     void reverseArray(int arr[], int size)
//
// That reverses the array IN PLACE (modifies original array).
// Then print the reversed array.
//
// Test with: {1, 2, 3, 4, 5}
// Expected output: 5 4 3 2 1
//
// Hint: swap elements from both ends moving inward
//       use a temp variable to swap:
//       int temp = arr[i];
//       arr[i] = arr[j];
//       arr[j] = temp;
// ================================================

// YOUR CODE HERE:




// ================================================
// PROBLEM 4 — Second Largest
// ================================================
// Write a function:
//     int secondLargest(int arr[], int size)
//
// That returns the second largest element in the array.
//
// Test with: {3, 7, 1, 9, 4, 6, 2}
// Expected output: Second largest: 7
//
// Hint: track both max AND second max
// ================================================

// YOUR CODE HERE:




// ================================================
// PROBLEM 5 — Count Words
// ================================================
// Write a function:
//     int countWords(string sentence)
//
// That counts the number of words in a sentence.
// Words are separated by spaces.
//
// Test with: "I am learning C++ for AI and ML"
// Expected output: Words: 8
//
// Hint: count spaces + 1
//       loop through each character
//       if character is ' ' → count++
// ================================================

// YOUR CODE HERE:




// ================================================
// PROBLEM 6 — Power Function
// ================================================
// Write a function:
//     double power(double base, int exp)
//
// That calculates base raised to the power exp.
// Do NOT use pow() from cmath — use a loop!
//
// Test with:
//     power(2, 10) → 1024
//     power(3, 3)  → 27
//     power(5, 0)  → 1  (special case!)
//
// Hint: multiply base by itself exp times
//       result starts at 1 (like factorial!)
// ================================================

// YOUR CODE HERE:




// ================================================
// PROBLEM 7 — Array Contains
// ================================================
// Write a function:
//     bool contains(int arr[], int size, int target)
//
// That returns true if target exists in the array,
// false otherwise.
//
// Test with:
//     arr = {5, 3, 8, 1, 9, 2}
//     contains(arr, 6, 8) → true
//     contains(arr, 6, 7) → false
// ================================================

// YOUR CODE HERE:




// ================================================
// PROBLEM 8 — Print Multiplication Table
// ================================================
// Write a function:
//     void multiTable(int n)
//
// That prints the multiplication table for n up to 10.
//
// Test with n = 5:
// Expected output:
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// ...
// 5 x 10 = 50
// ================================================

// YOUR CODE HERE:




// ================================================
// PROBLEM 9 — String Uppercase Counter
// ================================================
// Write a function:
//     int countUpper(string word)
//
// That counts how many UPPERCASE letters are in a string.
//
// Test with:
//     "Hello World"  → 2
//     "CPP is FUN"   → 6
//     "lowercase"    → 0
//
// Hint: a character is uppercase if:
//     ch >= 'A' && ch <= 'Z'
// ================================================

// YOUR CODE HERE:




// ================================================
// PROBLEM 10 — ML Accuracy Classifier
// ================================================
// Write a function:
//     void classifyModel(double accuracy)
//
// That prints a classification based on accuracy:
//     >= 95%  → "Production Ready"
//     >= 85%  → "Good Model"
//     >= 70%  → "Needs Improvement"
//     >= 50%  → "Poor Model"
//     < 50%   → "Failed — Retrain"
//
// Test with: 97.5, 88.0, 72.3, 55.1, 43.0
// ================================================

// YOUR CODE HERE:




// ================================================
// MAIN — uncomment each problem as you solve it
// ================================================
int main() {

    // Problem 1
    // int arr1[] = {1, 2, 3, 4, 5};
    // cout << "Sum: " << sumArray(arr1, 5) << "\n";

    // Problem 2
    // int arr2[] = {3, -1, 4, -5, 2, -8, 7};
    // cout << "Negatives: " << countNegative(arr2, 7) << "\n";

    // Problem 3
    // int arr3[] = {1, 2, 3, 4, 5};
    // reverseArray(arr3, 5);

    // Problem 4
    // int arr4[] = {3, 7, 1, 9, 4, 6, 2};
    // cout << "Second largest: " << secondLargest(arr4, 7) << "\n";

    // Problem 5
    // cout << "Words: " << countWords("I am learning C++ for AI and ML") << "\n";

    // Problem 6
    // cout << power(2, 10) << "\n";
    // cout << power(3, 3)  << "\n";
    // cout << power(5, 0)  << "\n";

    // Problem 7
    // int arr7[] = {5, 3, 8, 1, 9, 2};
    // cout << contains(arr7, 6, 8) << "\n";
    // cout << contains(arr7, 6, 7) << "\n";

    // Problem 8
    // multiTable(5);

    // Problem 9
    // cout << countUpper("Hello World") << "\n";
    // cout << countUpper("CPP is FUN")  << "\n";
    // cout << countUpper("lowercase")   << "\n";

    // Problem 10
    // classifyModel(97.5);
    // classifyModel(88.0);
    // classifyModel(72.3);
    // classifyModel(55.1);
    // classifyModel(43.0);

    return 0;
}
