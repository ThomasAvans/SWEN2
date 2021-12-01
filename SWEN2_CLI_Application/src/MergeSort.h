#pragma once
class MergeSort
{
public:
	void merge(int* arr, int low, int high, int mid);
	void merge_sort(int* arr, int low, int high);
	void printArray(int arr[], int size);
};