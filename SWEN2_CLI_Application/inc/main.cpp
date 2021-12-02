#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "FillArray.h"
#include "BubbleSort.h"
#include "HeapSort.h"
#include "MergeSort.h"
#include "../tst/FillArrayTest.h"
#include "../src/HeapSort.h"
#include "../tst/HeapSortTest.h"
#include "../src/MergeSort.h"
#include "../tst/MergeSortTest.h"

using namespace std;

FillArray fillMyArray;
FillArrayTest fillTest;
<<<<<<< HEAD
BubbleSort bubblesort;
HeapSort heapsort;
MergeSort mergeSort;
=======
HeapSort heapSort;
HeapSortTest heapTest;
MergeSort mergeSort;
MergeSortTest mergeTest;
>>>>>>> feature_F3

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

<<<<<<< HEAD
    //Bubble sorter
    fillMyArray.arrayFiller();
    int* arr2 = fillMyArray.array;
    
    bubblesort.sort(arr2, n);
    cout << "Bubblesorted array: \n";
    bubblesort.printSorted(arr2, n);
    cout << "\n";
=======
>>>>>>> feature_F3

    //Heap sorter
    fillMyArray.arrayFiller();
    int* arr4 = fillMyArray.array;

<<<<<<< HEAD
    heapsort.heapSorting(arr4, n);

    cout << "Heapsorted array \n";
    heapsort.printArray(arr4, n);
    cout << "\n";

=======
    heapSort.heapSorting(arr4, n);

    cout << "Heapsorted array \n";
    heapSort.printArray(arr4, n);
    cout << "\n";


    //Heap sorter test
    int checkHeap = heapTest.arrayCheckerHeap(arr4, n);
    if (checkHeap < 0) {
        cout << "Heapsorter test Failed" << endl;
    }
    else {
        cout << "Heapsorter test succeeded" << endl;
    }
    cout << "\n";


>>>>>>> feature_F3
    //Merge sort
    fillMyArray.arrayFiller();
    int* arr3 = fillMyArray.array;

    mergeSort.merge_sort(arr3, 0, 29);

    cout << "Merge sorted array:\n";
    mergeSort.printArray(arr3, n);
<<<<<<< HEAD
=======
    cout << "\n";


    //Merge sorter test
    int checkMerge = mergeTest.arrayCheckerMerge(arr3, n);
    if (checkMerge < 0) {
        cout << "Merge sorter test Failed" << endl;
    }
    else {
        cout << "Merge sorter test succeeded" << endl;
    }
    cout << "\n";
>>>>>>> feature_F3

    return 0;
}