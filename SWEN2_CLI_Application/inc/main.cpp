#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "../src/FillArray.h"
#include "../tst/FillArrayTest.h"
#include "../src/HeapSort.h"
#include "../tst/HeapSortTest.h"
#include "../src/MergeSort.h"
#include "../tst/MergeSortTest.h"

using namespace std;

FillArray fillMyArray;
FillArrayTest fillTest;
HeapSort heapSort;
HeapSortTest heapTest;
MergeSort mergeSort;
MergeSortTest mergeTest;

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


    //Heap sorter
    fillMyArray.arrayFiller();
    int* arr4 = fillMyArray.array;

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


    //Merge sort
    fillMyArray.arrayFiller();
    int* arr3 = fillMyArray.array;

    mergeSort.merge_sort(arr3, 0, 29);

    cout << "Merge sorted array:\n";
    mergeSort.printArray(arr3, n);
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

    return 0;
}