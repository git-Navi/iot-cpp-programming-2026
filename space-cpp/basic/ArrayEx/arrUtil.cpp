#include "arrUtil.h"

template <typename T, size_t N>

void printArr(T(&arr)[N]) {
	for (int i = 0; i < size(arr); i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	cout << endl;
}