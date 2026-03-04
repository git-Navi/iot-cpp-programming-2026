/*
	변환 생성자 : 인자를 단 하나 가지는 생성자
*/

#include <iostream>

class Time {
	int hour;
	int min;
	int sec;
public:				// 변환 생성자
	Time() {};
	Time(int abssec) {
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}
	void outTime() {
		printf("입력한 시간은 %d 시 %d 분 %d 초 입니다.\n", hour, min, sec);
	}
};

int main() {

	Time now(4372);
	now.outTime();

	return 0;
}