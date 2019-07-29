#include <iostream>
#include "Sorts.h"

using namespace std;

int main()
{
    int selectionTest[] {5, 3, 23, 5 , 2 , 1, 0, -2, -5};
    int n = sizeof(selectionTest) / sizeof(selectionTest[0]);
    Sorts::selectionSort(selectionTest, n);
    cout << "Selection Sort:" << endl;
    Sorts::printArray(selectionTest, n);

    int insertionTest[] {5, 3, 23, 5 ,2 ,1, 0, -2, -5};
    int insertionLen = sizeof(insertionTest) / sizeof(insertionTest[0]);
    Sorts::insertionSort(insertionTest, insertionLen);
    cout << "Insertion Sort:" << endl;
    Sorts::printArray(insertionTest, insertionLen);

    int quickSortTest[] {5, 3, 23, 5 ,2 ,1, 0, -2, -5};
    int quickSortLen  = sizeof(quickSortTest) / sizeof(quickSortTest[0]);
    Sorts::insertionSort(quickSortTest, quickSortLen);
    cout << "Quick Sort:" << endl;
    Sorts::printArray(insertionTest, quickSortLen);
    return 0;
}