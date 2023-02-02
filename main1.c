#include <iostream>
#include "recursion.h"
using namespace std;

int main(){
	int n = 10;
	int arr[] = {1,23,45,2,56,3,7,8,9,0};
	show_from_last(n);
	std::cout<< std::endl;
	show_from_first(n);
	std::cout<< std::endl;
	cout << find_min(arr, n);
	cout << endl;
	cout << find_max(arr, n);
	return 0;
}
