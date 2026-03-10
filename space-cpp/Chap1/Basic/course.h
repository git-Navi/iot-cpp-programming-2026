#ifndef COURSE_H

#define COURSE_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

class CourseRoster {
private:
	int size;
	string* stdNames;
	CourseRoster* roster;
public:
	CourseRoster();
	~CourseRoster();
	void addStudent(string studentName);
	void print() const;
};

#endif