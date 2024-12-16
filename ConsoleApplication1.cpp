#include <iostream>
using namespace std;
int main()
{

	// поиск минимального элемента в одномерном массиве
	int arr1[5];
	int minn;
	for (int i = 0; i < 5; i++) {
		cin >> arr1[i];
		minn = arr1[0];
		for (int j = 1; j < 5; j++) {
			if (arr1[j] < minn) {
				minn = arr1[j];
			}
		}
	}
	cout << minn << endl;

	// поиск максимального элемента в одномерном массиве
	int arr2[5];
	int maxx;
	for (int i = 0; i < 5; i++) {
		cin >> arr2[i];
		maxx = arr2[0];
		for (int j = 1; j < 5; j++) {
			if (arr2[j] > maxx) {
				maxx = arr2[j];
			}
		}
	}
	cout << maxx;

	/* как переписать все элементы одного одномерного массива в другой однмерный массив*/
	/*1 способ (с использованием 2-ух циклов)*/
	int arr[5]{ 1,2,3,4,5 };
	int arr2[5]{};
	for (int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++){
		arr2[j] = arr[i];
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	/*2 способ (с использованием 1-ого цикла)*/
	int arr[5]{ 1,2,3,4,5 };
	int arr2[5]{};
	for (int i = 0; i < 5; i++) {
		arr2[i] = arr[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
}
