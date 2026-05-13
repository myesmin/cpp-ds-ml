/*
Find the maximum element in an array.
No built-in functions allowed.

Input:  {3, 7, 1, 9, 4, 6, 2}
Output: Max: 9

Write:
int findMax(int arr[], int size)
*/
#include <iostream>

int findMax(int arr[], int size) {
    int max = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    } return max;
}

int main() {
    int arr[7] = {3, 7, 1, 9, 4, 6, 2};
    
    int result = findMax(arr, 7);
    std::cout << "Max: " << result << "\n";
    return 0;
}