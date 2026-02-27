#include <iostream>

int main(void) {
	// cin을 사용해서 이름과 나이를 출력
 
	// 배열로 받아도 무방하다.
	std::string name;
	int age;

	// 객체와 인스턴스의 차이점
	//std::cout << "이름을 작성해주세요. ";
	//std::cin >> name;

	//std::cout << "나이를 작성해주세요. ";
	//std::cin >> age;

	//std::cout << "이름과 나이를 작성해주세요. ";
	//std::cin >> name >> age;
	
	std::cout << "나이와 이름을 작성해주세요. ";
	std::cin >> age >> name;

	std::cout << "이름은 " << name << "이며, \n";
	std::cout << "나이는 " << age << "입니다.\n";

}