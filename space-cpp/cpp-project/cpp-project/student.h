#ifndef STUDENT_H

#define STUDENT_H
#include <iostream>
#include <cassert>
using namespace std;

class Student {
private:
	string name;
	double gpa;
public:
	Student(string name, double gpa);
	~Student();
	void print() const;
};

#endif