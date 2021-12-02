#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "../inc/fillArray.h"
#include "../tst/FillArrayTest.h"
#include "../inc/bubbleSort.h"
#include "../tst/BubbleSortTest.h"
#include "../inc/heapSort.h"
#include "../tst/HeapSortTest.h"
#include "../inc/mergeSort.h"
#include "../tst/MergeSortTest.h"

using namespace std;

fillArray fillMyArray;
FillArrayTest fillArrayTest;
bubbleSort bubblesort;
BubbleSortTest bubbleTest;
heapSort heapsort;
HeapSortTest heapTest;
mergeSort mergesort;
MergeSortTest mergeTester;

// Driver Code 
int main()
{

    //VOOR HET VULLEN VAN DE ARRAY (Random geseed met tijd)
    fillMyArray.arrayFiller();
    int* arr = fillMyArray.array;

    //Voor het checken van de FillArray
    int n = (sizeof(int) * 30) / sizeof(arr[0]);
    int check = fillArrayTest.arrayChecker(arr, n);
    if (check < 0) {
        cout << "Fill Array test Succeeded" << endl;
    }
    else {
        cout << "Fill Array test Failed" << endl;
    }
    cout << "\n";

    //Bubble sorter
    fillMyArray.arrayFiller();
    int* arr2 = fillMyArray.array;

    bubblesort.sort(arr2, n);
    cout << "Bubblesorted array: \n";
    bubblesort.printSorted(arr2, n);
    cout << "\n";
    //Bubblesort check

    int checkBubble = bubbleTest.arrayCheckerBubble(arr2, n);
    if (checkBubble < 0) {
        cout << "Bubblesorter test Failed" << endl;
    }
    else {
        cout << "Bubblesorter test succeeded" << endl;
    }
    cout << "\n";


    //heap sorter
    fillMyArray.arrayFiller();
    int* arr4 = fillMyArray.array;

    heapsort.heapSorting(arr4, n);

    cout << "Heapsorted array \n";
    heapsort.printArray(arr4, n);
    cout << "\n";

    //heapsorter
    int checkHeap = heapTest.arrayCheckerHeap(arr4, n);
    if (checkHeap < 0) {
        cout << "Heapsorter test Succeeded" << endl;
    }
    else {
        cout << "Heapsorter test Failed" << endl;
    }
    cout << "\n";


    //Merge sort
    fillMyArray.arrayFiller();
    int* arr3 = fillMyArray.array;

    mergesort.merge_sort(arr3, 0, 29);

    cout << "Merge sorted array:\n";
    mergesort.printArray(arr3, n);
    cout << "\n";

    //Merge check

    int checkMerge = mergeTester.arrayCheckerMerge(arr3, n);
    if (checkMerge < 0) {
        cout << "Merge sorter test Failed" << endl;
    }
    else {
        cout << "Merge sorter test succeeded" << endl;
    }
    cout << "\n";

    return 0;
}