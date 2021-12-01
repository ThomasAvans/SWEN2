#pragma once

class BubbleSort
{
    BubbleSort();
    virtual ~BubbleSort();
public:
	void swapping(int& a, int& b);
	void printSorted(int* array, int size);
	void sort(int* array, int size);
};