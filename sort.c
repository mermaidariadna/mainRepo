#include "sort.h"

void bubleSort(int arr[], int size){
	int i, j;
	for (i = 0; i < size - 1; i++){
        	for (j = 0; j < size - i - 1; j++){
            		if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);		
		}
	}
}
void selectionSort(int arr[], int size){
	int pos_min,temp;
        for (int i = 0; i < size - 1; i++){
        	pos_min = i;        
        	for (int j = i + 1; j < size; j++){
                	if (arr[j] < arr[pos_min]) pos_min=j;
            		if (pos_min != i) swap(arr[i], arr[pos_min]);	}
	}
}

void countSort(int arr[], int size){
	//something
}

void insertionSort(int arr[], int size){
	int i, j, key;
	for(int i = 1; i < size; i++){
		key = arr[i];
		j = i - i;
		while( arr[j] > key && j >= 0){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
