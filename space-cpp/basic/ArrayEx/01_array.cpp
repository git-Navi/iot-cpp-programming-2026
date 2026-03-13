#include <iostream>
using namespace std;

int main() {
	// 배열의 선언
	int arr[5];

	// 배열의 초기화
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	int arr2[5] = { 1, 2, 3, 4, 5 };	// 배열을 선언과 동시에 초기화
	int arr3[] = { 6, 7, 8, 9, 10 };	// 배열의 크기를 생략하고 초기화

	cout << "arr의 길이는 " << sizeof(arr) / sizeof(int) << "입니다." << endl;
	cout << "arr2의 길이는 " << size(arr2) << "입니다." << endl;
	
	for (int i = 0; i < size(arr3); i++) {
		cout << "arr3[" << i << "] = " << arr3[i] << endl;
	}
	for (int i = size(arr2) - 1; i >= 0; i--) {
		cout << "arr2[" << i << "] = " << arr2[i] << endl;
	}

	bool arrBool[] = { true, -1, true, 0 };
	string arrStr[] = { "Hello", "World", "C++" };
	char arrChar[] = { 'A', 'B', 'C', 'D', 'E' };

	return 0;
}