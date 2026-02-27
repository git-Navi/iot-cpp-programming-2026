#include <iostream>

int MyFunc(int num) {
	num++;
	return num;
}

int MyFunc(int a, int b) {
	return a + b;
}

int MyFuncOne(int num = 7) {
	return num + 1;
}

int MyFuncTwo(int num1 = 5, int num2 = 7) {
	return num1 + num2;
}

int main(void) {

	MyFunc(20);	// 21
	MyFunc(30, 40);	// 70

	std::cout << MyFunc(20) << std::endl;
	std::cout << MyFunc(30, 40) << std::endl;

	// 함수 디폴트 값, 매개변수에 이미 디폴트값, 초기값을 준 상태.
	std::cout << MyFuncOne() << std::endl;
	std::cout << MyFuncTwo() << std::endl;

	// 만약 디폴트 값이 있는데 정수 값을 적으면 정수 값이 출력됨.
	std::cout << MyFuncTwo(17) << std::endl;

	return 0;
}