#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "FillArray.h"
#include "BubbleSort.h"
#include "HeapSort.h"
#include "MergeSort.h"
#include "../tst/FillArrayTest.h"

using namespace std;

FillArray fillMyArray;
FillArrayTest fillTest;
BubbleSort bubblesort;
HeapSort heapsort;
MergeSort mergeSort;

// Driver Code 
int main()
{
    //To fill the array
    fillMyArray.arrayFiller();
    int *arr = fillMyArray.array;

    //To check FillArray
    int n = (sizeof(int) * 30) / sizeof(arr[0]);
    int check = fillTest.arrayChecker(arr, n);
    if (check < 0) {
        cout << "FillArray test Failed" << endl;
    }
    else {
        cout << "FillArray test succeeded" << endl;
    }
    cout << "\n";

    //Bubble sorter
    fillMyArray.arrayFiller();
    int* arr2 = fillMyArray.array;
    
    bubblesort.sort(arr2, n);
    cout << "Bubblesorted array: \n";
    bubblesort.printSorted(arr2, n);
    cout << "\n";

    //Heap sorter
    fillMyArray.arrayFiller();
    int* arr4 = fillMyArray.array;

    heapsort.heapSorting(arr4, n);

    cout << "Heapsorted array \n";
    heapsort.printArray(arr4, n);
    cout << "\n";

    //Merge sort
    fillMyArray.arrayFiller();
    int* arr3 = fillMyArray.array;

    mergeSort.merge_sort(arr3, 0, 29);

    cout << "Merge sorted array:\n";
    mergeSort.printArray(arr3, n);

    return 0;
}