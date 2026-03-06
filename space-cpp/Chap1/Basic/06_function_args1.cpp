#include <iostream>
using namespace std;

void func(int y);

int main() {
	
	int x = 10;

	func(x);

	cout << "main 함수 내부의 x는 " << x << "입니다." << endl;

	return 0;
}

void func(int y) {
	y++;
	cout << "func 함수 내부의 y는 " << y << "입니다. "<< endl;

	return;
}