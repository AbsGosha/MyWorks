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
}
