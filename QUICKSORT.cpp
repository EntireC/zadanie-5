#include "stdafx.h"
#include "iostream"
using namespace std;

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high) {
	int anchor = arr[high];    
	int i = (low - 1);  
	for (int j = low; j <= high - 1; j++) {
		if (arr[j] <= anchor) {
			i++;    
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int x = partition(arr, low, high);
		quickSort(arr, low, x - 1);
		quickSort(arr, x + 1, high);
	}
}

int main() {
	int arr[] = {37, 90, 65, 1, 0, 38, -7, 4, 19, -2014};
	int size = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, size - 1);
	printArray(arr, size);
	return 0;
}