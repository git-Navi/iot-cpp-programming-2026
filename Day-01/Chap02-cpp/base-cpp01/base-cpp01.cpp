// 키워드 const 의미?

#include <iostream>

using namespace std;

int main(void) {
	//int num1 = 10;

	//std::cout << num1 << std::endl;
	
	// using namespace std; 를 사용하면 std를 적을 필요가 없다.
	//cout << num1 << endl;

	int num2 = 20;
	const int* p1 = &num2;
	cout << num2 << endl;
	cout << *p1 << endl;

	//*p = 10;

	cout << *p1 << endl;
	
}