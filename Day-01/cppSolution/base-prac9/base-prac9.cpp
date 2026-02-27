#include <iostream>

namespace BestComImpl {
	void SimpleFunc(void);
}

namespace ProgComImpl {
	void SimpleFunc(void);
}

int main(void) {
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();

	return 0;
}

// 이름 공간 BestComImpl에 위치하는 함수
void BestComImpl::SimpleFunc(void) {
	std::cout << "BestCom이 정의한 함수 " << std::endl;
}

// 이름 공간 ProgComImpl에 위치하는 함수
void ProgComImpl::SimpleFunc(void) {
	std::cout << "ProgCom이 정의한 함수 " << std::endl;
}