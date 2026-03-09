//#include <iostream>
//using namespace std;
//
//class Member {
//public:
//	// << 연산자를 오버로딩하여 cout이 Member 객체를 다룰 수 있게 한다.
//	friend ostream& operator<<(ostream& os, const Member& c) {
//		os << "Member instance";
//
//		return os;
//	}
//};
//
//int main() {
//	Member m;
//	cout << m << endl;
//
//	return 0;
//}