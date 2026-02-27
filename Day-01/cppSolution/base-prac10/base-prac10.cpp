#include <iostream>

namespace BestComImpl {
	void SimpleFunc(void);
}

namespace BestComImpl {
	void PrettyFunc(void);
}

int main(void) {

	return 0;
}

void BestComImpl::SimpleFunc(void) {

	std::cout << "BestCom이 정의한 함수 " << std::endl;
	PrettyFunc();	// 동일 이름 공간
	//ProgComImpl::SimpleFunc();	// 다른 이름 공간
}

void BestComImpl::PrettyFunc(void) {
	std::cout << "So Pretty!!" << std::endl;
}