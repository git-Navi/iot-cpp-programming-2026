#include <iostream>

int Func(int num1, int num2 = 5, int num3 = 7) {
	return num1 + num2 + num3;
}

int WrongFunc(int num1 = 20, int num2 = 10, int num3) {
	return num1 + num2 + num3;
}

int main(void) {

	// Func 함수에 num1 입력 값이 없으므로 호출 할 때 num1 값을 넣어야함.
	std::cout << Func(10) << std::endl;

	// 만약 3가지 중에 1가지만 입력 값을 주고 싶은 경우에는 디폴트 값은 오른쪽에서부터 채워져야한다.
	// 이 상태에서 해당 호출만 쓰는 경우에는 오류가 발생한다.
	// 전달되는 인자는 왼쪽에서부터 채워지기 때문이다.
	//std::cout << WrongFunc(10) << std::endl;

	return 0;
}