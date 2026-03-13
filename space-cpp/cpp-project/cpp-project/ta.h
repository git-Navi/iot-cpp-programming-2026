#ifndef TA_H

#define TA_H
#include "student.h"
#include "professor.h"

class TA : virtual public Professor, public Student {
protected:
	double salary;
public :
	TA(string name, double gpa, double salary);
	~TA();
	void print();
};