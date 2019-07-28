//
// Created by Koenn Becker on 2019-07-27.
//

#ifndef SORTSEARCH_SORTS_H
#define SORTSEARCH_SORTS_H


class Sorts {
public:
    static void selectionSort(int arr[], int length);
    static void printArray(int arr[], int length);
private:
    Sorts();
    static void swap(int* a, int* b);
};


#endif //SORTSEARCH_SORTS_H
