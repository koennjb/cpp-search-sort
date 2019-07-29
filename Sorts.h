//
// Created by Koenn Becker on 2019-07-27.
//

#ifndef SORTSEARCH_SORTS_H
#define SORTSEARCH_SORTS_H


class Sorts {
public:
    static void selectionSort(int arr[], int length);
    static void insertionSort(int arr[], int length);
    static void quickSort(int arr[], int low, int high);
    static void printArray(int arr[], int length);
private:
    Sorts();
    static void swap(int* a, int* b);
    static int partition(int arr[], int low, int high);
};


#endif //SORTSEARCH_SORTS_H
