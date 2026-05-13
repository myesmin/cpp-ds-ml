/*
Count how many even numbers are in an array.

Input:  {1, 2, 3, 4, 5, 6, 7, 8}
Output: Even count: 4

Write:
int countEven(int arr[], int size)
*/
#include <iostream>

int countEven(int arr[], int size) {
    int even = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even++ ;
        }
    } return even;
}


int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int result = countEven(arr, 8);
    std::cout << "Even count: " << result << "\n";
    return 0;
}
