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
    for (int i = 0; i < length ; i++) {
        minIndex = i;
        // Find the smallest element
        for (int j = i + 1; j < length; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the new minimum
        swap(&arr[i], &arr[minIndex]);
    }
}

/**
 * Iterative insertion sort for int arrays. O(n^2).
 * @param arr The array to sort.
 * @param length The number of elements in the array.
 */
void Sorts::insertionSort(int *arr, int length) {

    // Loop through each element in the array
    for (int i = 0; i < length; i++) {

        int current = arr[i];
        int j = i;

        /*
         * Compare the current element to all the ones before it and swap while the current is less than the previous.
         */
        while ( j > 0 && current < arr[j - 1]) {
            // Move the element to the left one position forward and update j
            arr[j] = arr[j-1];
            j -= 1;
        }
        // After the previous elements have been moved forward if neccesary, move the current element into the correct spot.
        arr[j] = current;
    }
}

/**
 * Helper function to print an array
 * @param arr The array to print
 * @param length How many elements are in the array
 */
void Sorts::printArray(int *arr, int length) {
    for (int i = 0; i < length; i++) {
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

/**
 * Sorts an array of integers using a recursive quick sort. O(n*log n) average time complexity, O(n^2) worst case.
 * @param arr The array to sort
 * @param low The starting index of the array
 * @param high The ending index of the array
 */
void Sorts::quickSort(int *arr, int low, int high) {
    if (low < high) {
        // pi is partition index.
        int pi = partition(arr, low, high);

        // Divide and Conquer!
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/**
 * This function takes last element as pivot, places
 * the pivot element at its correct position in sorted
 * array, and places all smaller (smaller than pivot)
 * to left of pivot and all greater elements to right
 * of pivot
 * @param arr The array to partition
 * @param low The starting index for partition
 * @param high The end index for partition
 * @return the partition index
 */
int Sorts::partition(int *arr, int low, int high) {
    // Can be optimized by starting with median index or random index.
    int pivot = arr[high];
    int si = (low - 1);

    for (int i = low; i < high; i++) {
        // If the current element is smaller than or equal to the pivot, swap the current element and smallest element
        if (arr[i] <= pivot) {
            swap(&arr[i], &arr[si]);
            si++; // Increment the smallest index
        }
    }
    // Swap one after the smallest index with the index of pivot
    swap(&arr[si + 1], &arr[high]);
    return si + 1;
}
