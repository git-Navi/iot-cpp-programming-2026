#include <iostream>

int main(void) {
	int num = 20;
	//printf("num : %d\n", num);

	std::cout << "Hello World!" << std::endl;
	// std (네임스페이스), :: (범위 연산자), cout (객체), << (출력 연산자), endl (객체)
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	return 0;
}