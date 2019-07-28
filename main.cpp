#include <iostream>
#include "Sorts.h"

using namespace std;

int main()
{
    int test[] {5, 3, 23, 5 ,2 ,1, 0, -2, 43};
    int n = sizeof(test)/sizeof(test[0]);
    Sorts::selectionSort(test, n);
    Sorts::printArray(test, n);
    return 0;
}