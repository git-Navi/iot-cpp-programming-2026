#include <iostream>
#include <ctime>
using namespace std;

// 함수 내부에서 throw를 하여 main 함수에서 catch로 예외를 처리하는 구조가 일반적이다.
int divide(int a, int b) {
	if (b == 0) {
		throw "Division by zero is not allowed.";
	} return a / b;
}

int main() {
	srand(static_cast<unsigned int>(time(0)));
	int num1 = rand() % 10;
	int num2 = rand() % 10;

	while (true) {
		try {
			cout << "Dividing " << num1 << " by " << num2 << "..." << endl;
			int result = divide(num1, num2);
			cout << "Result: " << result << endl;
		}
		catch (const char* e) {
			cout << "Error: " << e << endl;
			break;
		}
	}
}