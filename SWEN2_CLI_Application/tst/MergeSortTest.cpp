#include "../tst/MergeSortTest.h"

int MergeSortTest::arrayCheckerMerge(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++) {
        if (arr[i] > arr[i + 1]) {
            return -1;
        }
    }
    return 1;
}