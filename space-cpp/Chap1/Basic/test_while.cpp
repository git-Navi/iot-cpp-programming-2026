//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//// 내 마음의 숫자 게임!
//// 미리 정해둔 숫자를 랜덤하게 먼저 선정, 그 이후 숫자 입력.
//// 비교를 이어가고. 맞으면 exit, 크거나 작으면 메세지 출력해서 계속 반복 진행.
//
//int main() {
//	srand(time(0));	// 설정을 해두지 않으면 매번 같은 숫자가 출력이 되어서 사용함.
//	int rand_num = rand() % 100 + 1;
//	int num;
//
//	do {
//		cout << "1~100 사이의 숫자를 입력하세요. ";
//		cin >> num;
//
//		if (num > rand_num) {
//			cout << "더 작은 숫자입니다." << endl;
//		}
//		else if (num < rand_num) {
//			cout << "더 큰 숫자입니다." << endl;
//		}
//		else {
//			cout << "정답을 맞췄습니다!" << endl;
//		}
//
//	} while (num != rand_num);
//
//	return 0;
//}