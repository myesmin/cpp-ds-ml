// ================================================
// PROBLEM SET 1 — SOLUTIONS & EXPLANATIONS
// ================================================
// Read ONLY after attempting problems yourself!
// Each solution includes:
// - The code
// - Step by step explanation
// - Key concepts used
// ================================================

#include <iostream>
#include <string>
using namespace std;


// ================================================
// PROBLEM 1 — Sum of Array
// ================================================
// CONCEPT: accumulating a sum (Day 5)
// KEY: sum starts at 0, add each element in loop
//
// Step by step:
// sum = 0
// sum += 1 → sum = 1
// sum += 2 → sum = 3
// sum += 3 → sum = 6
// sum += 4 → sum = 10
// sum += 5 → sum = 15
// return 15
// ================================================
int sumArray(int arr[], int size) {
    int sum = 0;                    // start at 0 (counting/summing pattern)
    for (int i = 0; i < size; i++) {
        sum += arr[i];              // add each element
    }
    return sum;
}


// ================================================
// PROBLEM 2 — Count Negative Numbers
// ================================================
// CONCEPT: counting with condition (Day 3 + Day 5)
// KEY: count starts at 0, increment when condition met
//
// Step by step for {3, -1, 4, -5, 2, -8, 7}:
// 3  < 0? NO
// -1 < 0? YES → count = 1
// 4  < 0? NO
// -5 < 0? YES → count = 2
// 2  < 0? NO
// -8 < 0? YES → count = 3
// 7  < 0? NO
// return 3
// ================================================
int countNegative(int arr[], int size) {
    int count = 0;                  // start at 0 (counting pattern)
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {          // check if negative
            count++;                // increment counter
        }
    }
    return count;
}


// ================================================
// PROBLEM 3 — Reverse Array
// ================================================
// CONCEPT: two pointer technique (important interview pattern!)
// KEY: swap elements from both ends moving inward
//
// Step by step for {1, 2, 3, 4, 5}:
// i=0, j=4: swap arr[0] and arr[4] → {5, 2, 3, 4, 1}
// i=1, j=3: swap arr[1] and arr[3] → {5, 4, 3, 2, 1}
// i=2, j=2: i < j is false → stop!
// ================================================
void reverseArray(int arr[], int size) {
    int i = 0;
    int j = size - 1;

    while (i < j) {
        // swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;                        // move inward from left
        j--;                        // move inward from right
    }

    // print reversed array
    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }
    cout << "\n";
}


// ================================================
// PROBLEM 4 — Second Largest
// ================================================
// CONCEPT: tracking multiple values (extends findMax)
// KEY: track both max AND second max simultaneously
//
// Step by step for {3, 7, 1, 9, 4, 6, 2}:
// max = 3, second = INT_MIN
// 7 > max(3)?  YES → second = 3,  max = 7
// 1 > max(7)?  NO  → 1 > second(3)?  NO
// 9 > max(7)?  YES → second = 7,  max = 9
// 4 > max(9)?  NO  → 4 > second(7)?  NO
// 6 > max(9)?  NO  → 6 > second(7)?  NO
// 2 > max(9)?  NO  → 2 > second(7)?  NO
// return second = 7
// ================================================
int secondLargest(int arr[], int size) {
    int max = arr[0];
    int second = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            second = max;           // old max becomes second
            max = arr[i];           // new max found
        } else if (arr[i] > second && arr[i] != max) {
            second = arr[i];        // new second found
        }
    }
    return second;
}


// ================================================
// PROBLEM 5 — Count Words
// ================================================
// CONCEPT: string traversal (Day 5)
// KEY: count spaces + 1 = word count
//
// Step by step for "I am learning C++":
// 'I' → not space
// ' ' → space! count = 1
// 'a' → not space
// 'm' → not space
// ' ' → space! count = 2
// ...
// final count = 3 spaces → 4 words
// ================================================
int countWords(string sentence) {
    int count = 1;                  // start at 1 (first word has no space before it)
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {  // found a space = new word
            count++;
        }
    }
    return count;
}


// ================================================
// PROBLEM 6 — Power Function
// ================================================
// CONCEPT: multiplication loop (like factorial but different)
// KEY: result starts at 1, multiply base exp times
//
// Step by step for power(2, 10):
// result = 1
// result *= 2 → 2
// result *= 2 → 4
// result *= 2 → 8
// ... (10 times total)
// result = 1024
//
// Special case: power(5, 0)
// loop runs 0 times → result stays 1 → correct!
// ================================================
double power(double base, int exp) {
    double result = 1;              // start at 1 (multiplication pattern)
    for (int i = 0; i < exp; i++) {
        result *= base;             // multiply base exp times
    }
    return result;
}


// ================================================
// PROBLEM 7 — Array Contains
// ================================================
// CONCEPT: linear search (fundamental algorithm)
// KEY: loop through array, return true immediately if found
//
// Step by step for contains(arr, 6, 8):
// arr[0]=5  5==8? NO
// arr[1]=3  3==8? NO
// arr[2]=8  8==8? YES → return true immediately!
//
// For contains(arr, 6, 7):
// loop through all 6 elements
// none equal 7
// loop ends → return false
// ================================================
bool contains(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true;            // found! return immediately
        }
    }
    return false;                   // not found after full search
}


// ================================================
// PROBLEM 8 — Print Multiplication Table
// ================================================
// CONCEPT: loop with arithmetic (Day 3)
// KEY: simple for loop, multiply n by i
//
// Step by step for n=5:
// i=1:  5 x 1 = 5
// i=2:  5 x 2 = 10
// ...
// i=10: 5 x 10 = 50
// ================================================
void multiTable(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << "\n";
    }
}


// ================================================
// PROBLEM 9 — String Uppercase Counter
// ================================================
// CONCEPT: character comparison (Day 5 + ASCII values)
// KEY: uppercase letters are between 'A' and 'Z'
//
// Step by step for "Hello World":
// 'H' >= 'A' && 'H' <= 'Z'? YES → count = 1
// 'e' >= 'A' && 'e' <= 'Z'? NO
// 'l' >= 'A' && 'l' <= 'Z'? NO
// 'l' >= 'A' && 'l' <= 'Z'? NO
// 'o' >= 'A' && 'o' <= 'Z'? NO
// ' ' >= 'A' && ' ' <= 'Z'? NO
// 'W' >= 'A' && 'W' <= 'Z'? YES → count = 2
// ...
// return 2
// ================================================
int countUpper(string word) {
    int count = 0;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            count++;
        }
    }
    return count;
}


// ================================================
// PROBLEM 10 — ML Accuracy Classifier
// ================================================
// CONCEPT: if/else if chain (Day 3)
// KEY: check from highest to lowest threshold
//      order matters — check >= 95 BEFORE >= 85!
//
// Same pattern as grade calculator but for ML models
// ================================================
void classifyModel(double accuracy) {
    cout << accuracy << "% → ";
    if (accuracy >= 95) {
        cout << "Production Ready\n";
    } else if (accuracy >= 85) {
        cout << "Good Model\n";
    } else if (accuracy >= 70) {
        cout << "Needs Improvement\n";
    } else if (accuracy >= 50) {
        cout << "Poor Model\n";
    } else {
        cout << "Failed — Retrain\n";
    }
}


// ================================================
// MAIN — runs all solutions
// ================================================
int main() {
    cout << "=== Problem Set 1 Solutions ===\n\n";

    // Problem 1
    cout << "Problem 1 — Sum of Array\n";
    int arr1[] = {1, 2, 3, 4, 5};
    cout << "Sum: " << sumArray(arr1, 5) << "\n\n";

    // Problem 2
    cout << "Problem 2 — Count Negatives\n";
    int arr2[] = {3, -1, 4, -5, 2, -8, 7};
    cout << "Negatives: " << countNegative(arr2, 7) << "\n\n";

    // Problem 3
    cout << "Problem 3 — Reverse Array\n";
    int arr3[] = {1, 2, 3, 4, 5};
    reverseArray(arr3, 5);
    cout << "\n";

    // Problem 4
    cout << "Problem 4 — Second Largest\n";
    int arr4[] = {3, 7, 1, 9, 4, 6, 2};
    cout << "Second largest: " << secondLargest(arr4, 7) << "\n\n";

    // Problem 5
    cout << "Problem 5 — Count Words\n";
    cout << "Words: " << countWords("I am learning C++ for AI and ML") << "\n\n";

    // Problem 6
    cout << "Problem 6 — Power Function\n";
    cout << "2^10 = " << power(2, 10) << "\n";
    cout << "3^3  = " << power(3, 3)  << "\n";
    cout << "5^0  = " << power(5, 0)  << "\n\n";

    // Problem 7
    cout << "Problem 7 — Array Contains\n";
    int arr7[] = {5, 3, 8, 1, 9, 2};
    cout << "Contains 8: " << contains(arr7, 6, 8) << "\n";
    cout << "Contains 7: " << contains(arr7, 6, 7) << "\n\n";

    // Problem 8
    cout << "Problem 8 — Multiplication Table\n";
    multiTable(5);
    cout << "\n";

    // Problem 9
    cout << "Problem 9 — Count Uppercase\n";
    cout << countUpper("Hello World") << "\n";
    cout << countUpper("CPP is FUN")  << "\n";
    cout << countUpper("lowercase")   << "\n\n";

    // Problem 10
    cout << "Problem 10 — ML Classifier\n";
    classifyModel(97.5);
    classifyModel(88.0);
    classifyModel(72.3);
    classifyModel(55.1);
    classifyModel(43.0);

    return 0;
}
