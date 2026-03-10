//#include <iostream>
//using namespace std;
//
//// 클래스
//class Parent {
//private:
//	long id;
//public:
//	void setId(long id);
//	long getId() { return id; }
//	Parent(long id);
//};
//
//class Child : public Parent {
//private:
//	double tech_level;
//public:
//	void setTechLevel(double tech_level);
//	double getTechLevel();
//	Child(long id, double tech_level);
//};
//
//// 생성자
//Parent::Parent(long id) {
//	if (id >= 100000L && id <= 999999L) {
//		this->id = id;
//	}
//	else {
//		this->id = 0L;
//	}
//}
//
//Child::Child(long id, double tech_level) : Parent(id) {
//	this->tech_level = tech_level;
//}
//
//// 초기화 리스트
//Child::Child(long id, double tech_level) : Parent(id), tech_level(tech_level) {}
//
//// set
//void Parent::setId(long id) {
//	this->id = id;
//}
//
//void Child::setTechLevel(double tech_level) {
//	this->tech_level = tech_level;
//}
//
//// get
//double Child::getTechLevel() {
//	return tech_level;
//}
//
//int main() {
//	Parent p(123456l);
//	Child c(100000l, 2.0);
//	
//	cout << "Child의 ID : " << c.getId() << endl;
//	cout << "Child의 기술 수준 : " << c.getTechLevel() << endl;
//
//	return 0;
//}