#include "array.h"
#include <time.h>

//в репозитории нет файла array.h, скомпилировать не могу...


//комментарии высказал касательно аналогичной функции только arrayMax...
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
//если это функция получения максимума.... 
int arrayMax(int arr[], int size) {
    int maxx = arr[0], maxx_i = 0;	
    for (int i = 0; i < size; i++) {
        if (arr[i] > maxx) {
            maxx = arr[i]; //то зачем эта лишняя операция??.... можно просто сравнивать arr[i] > arr[maxx_i]... 
            maxx_i = i;
        }
    }
	//перепиши эту функцию с учётом пожеланий....
    return maxx_i;


}

void ShowArray(int* arr[], int size){
	for(int i = 0; i < size; i++){
		std::cout << arr[i] << std::endl;
	}
//если так функцию оставить, то будет выводиться всё последовательно.... я бы рекомендовал всё таки после вывода массива... добавить std::cout << "\n"; или std::cout << std::endl;
}

void fillRandom(int* firstElementArr, int size) {
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		*(firstElementArr + i) = random() % 100;	//как нужно поменять функцию, чтобы можно было изменять диапазон генерации рандомных чисел?....
	}
}
