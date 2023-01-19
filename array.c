#include "array.h"
#include <time.h>
int arrayMin(int arr[], int size) {
    int minn = arr[0], min_i = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < minn) {
            minn = arr[i];
            min_i = i;
        }
    }
    return min_i;
}
int arrayMax(int arr[], int size) {
    int maxx = arr[0], maxx_i = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > maxx) {
            maxx = arr[i];
            maxx_i = i;
        }
    }
    return maxx_i;
}
void ShowArray(int* arr[], int size){
	for(int i = 0; i < size; i++){
		std::cout << arr[i] << std::endl;
	}
}
void fillRandom(int* firstElementArr, int size) {
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		*(firstElementArr + i) = random() % 100;
	}
}
