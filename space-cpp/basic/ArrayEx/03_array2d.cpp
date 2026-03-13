#include <iostream>
#include "arrUtil.h"
using namespace std;

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };

	// 합, 평균 구하기
	int sum = 0;
	for (int i = 0; i < size(arr); i++) {
		sum += arr[i];
	}
	double avg = static_cast<double>(sum) / size(arr);

	cout << "합: " << sum << endl;
	cout << "평균: " << avg << endl;

	// 2차원 배열
	int arr2[3][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 }
	};
	printArr(arr2);

	for (int i = 0; i < size(arr2); i++) {
		for (int j = 0; j < size(arr2[i]); j++) {
			cout << "arr2[" << i << "][" << j << "] = " << arr2[i][j] << endl;
		}
		cout << endl;
	}

	// temp 배열, 4행과 5열을 가진 2차원 배열
	int temp[4][5] = { 0 };	// 모든 요소를 0으로 초기화
	memset(temp, 0, sizeof(temp));	// C 스타일로 초기화

	for (int i = 0; i < size(temp); i++) {
		for (int j = 0; j < size(temp[i]); j++) {
			cout << "temp[" << i << "][" << j << "] = " << temp[i][j] << endl;
		}
		cout << endl;
	}

	for (int i = 0; i < size(temp); i++) {
		for (int j = 0; j < size(temp[i]); j++) {
			temp[i][j] = i * size(temp[i]) + j + 1;	// 1부터 20까지 채우기
		}
	}
}