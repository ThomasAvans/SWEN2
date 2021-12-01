#include "BubbleSort.h"
#include<iostream>

using namespace std;

void BubbleSort::swapping(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void BubbleSort::sort(int* array, int size) {
    for (int i = 0; i < size; i++) {
        int swaps = 0;         //flag to detect any swap is there or not
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {       //when the current item is bigger than next
                swapping(array[j], array[j + 1]);
                swaps = 1;    //set swap flag
            }
        }
        if (!swaps)
            break;       // No swap in this pass, so array is sorted
    }
}

void BubbleSort::printSorted(int* array, int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}