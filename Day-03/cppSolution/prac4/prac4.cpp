#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {
	int size;
	int* arr;
	std::cout << "배열 크기 : ";
	std::cin >> size;

	arr = new int[size];

	std::cout << "만든 배열의 크기 : " << sizeof(int) * size << std::endl;

	delete[] arr;	// 동적 할당 해제

	return 0;
}