#include <iostream>

int main(void) {
	int val1;

	// 출력은 << 오른쪽에서 왼쪽으로 가는 연산자를 사용한다.
	// 입력을 받을 때는 >> 왼쪽에서 오른쪽으로 가는 연산자를 사용한다.
	// << 은 출력 연산자, >> 은 입력 연산자.
	std::cout << "첫 번째 숫자 입력 : ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자 입력 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈 결과 : " << result << std::endl;

	return 0;
}