//
// Created by Koenn Becker on 2019-07-27.
//

#include <iostream>
#include "Sorts.h"
using std::cout, std::endl;

Sorts::Sorts() = default;

/**
 * Selection sort for int arrays. O(n^2).
 * @param arr The array to sort
 * @param length How many elements are in the array
 */
void Sorts::selectionSort(int *arr, int length) {
    int minIndex = 0;

    // Loop through each element in the array
    for (int i = 0; i < length - 1; i++) {
        minIndex = i;
        // Find the smallest element
        for (int j = i + 1; j < length - 1; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the new minimum
        swap(&arr[i], &arr[minIndex]);
    }
}

/**
 * Helper function to print an array
 * @param arr The array to print
 * @param length How many elements are in the array
 */
void Sorts::printArray(int *arr, int length) {
    for (int i = 0; i < length - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/**
 * Helper function to swap two int values
 * @param a The first integer to swap
 * @param b The second integer to swap
 */
void Sorts::swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
