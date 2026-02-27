#include <iostream>

// 단순한 함수는 매크로 함수를 사용이 가능하다.
// 단, 기존 함수 정의 방식과 비교하면 복잡하여 복잡한 함수의 정의에는 한계가 있음.
// 간단한 것만 사용하자.
//#define SQUARE(x) ((x)*(x))

// 매크로 함수를 보완하기 위한 키워드 inline 선언
// 컴파일러가 함수의 인라인화를 결정한다.
inline int SQUARE(int x) {
	return x * x;
}


int main(void) {
	std::cout << SQUARE(5) << std::endl; // std::cout << ((5)*(5)) << std:endl; 와 동일하다.

	return 0;
}