#include "recursion.h"

int show_from_first(int n){
	show_from_last(n - 1);
	n = 0;
	return 0;
}
int show_from_last(int n){
        if (n < 0) return 0;
        std::cout << n << " ";
        show_from_last(n - 1);
        n = 0;
	return 0;
}

int find_min(int* arr, int size){
	if (size == 1) return arr[0];
   	return std::min(arr[size-1], find_min(arr, size-1));

}

int find_max(int* arr, int size){
        if (size == 1) return arr[0];
        return std::max(arr[size-1], find_max(arr, size-1));
}

