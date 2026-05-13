/*
=================================================
Practice Problem 5 — Count Duplicates
=================================================
Write a function:
    int countDuplicates(int arr[], int size)

That counts how many numbers appear MORE than once.

Input:  {1, 2, 3, 2, 4, 3, 5}
Output: Found 2 duplicates (2 and 3 appear twice)

Hints:
- use two nested loops
- outer loop picks each number
- inner loop checks if it appears again later
- use a counter
=================================================


//simplair 
#include <iostream>

int countDuplicates(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }

    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5};
    std::cout << "Duplicates " << countDuplicates(arr,7) << "\n";
    return 0;
}
*/

#include <iostream>

int countDuplicates( int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

void printDuplicates(int arr[], int size) {
    int count = countDuplicates(arr, size);

    if (count == 0) {
        std::cout << "No duplicates found!" << '\n';
        return;
    }

    std::cout << "Found " << count << " duplicate(s): ";

    bool first = true;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                if (!first) std::cout << ", ";
                std::cout << arr[j];
                first = false;
                break;
            }
        }
        
    } std::cout << "\n";
}


int main() {
    int arr1[] = {1, 2, 3, 2, 4, 3, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 1, 1, 2, 2};

    printDuplicates(arr1, 7);
    printDuplicates(arr2, 5);
    printDuplicates(arr3, 5);
    return 0;
}