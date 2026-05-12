/*
Practice Problem 1 — Reverse Print
----------------------------------------
Write a function:
    void reversePrint(int arr[], int size)

That prints the array in reverse order.

Input array: {1, 2, 3, 4, 5}
Expected output: 5 4 3 2 1

Hint: start your loop from the END of the array
      last index = size - 1
*/

// YOUR CODE STARTS HERE:
#include <iostream>

void reversePrint(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    reversePrint(arr, 5);
    return 0;
}