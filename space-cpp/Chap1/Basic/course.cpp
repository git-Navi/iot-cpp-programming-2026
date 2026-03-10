#include "course.h"

Course::Course(string nm, int ut) : name(nm), units(ut) {
	roster = new CourseRoster;
}

Course::~Course() {

}

string Course::getName() const {
	return name;
}

void Course::addStudent(string name) {
	roster->addStudent(name);
}

CourseRoster* Course::getRoster() const {
	return roster;
}

void Course::print() const {
	cout << "코스 이름   : " << name << endl;
	cout << "과목의 학점 : " << units << endl;
	roster->print();
}