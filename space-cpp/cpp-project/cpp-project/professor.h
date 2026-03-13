#ifndef PROFESSOR_H

#define PROFESSOR_H
#include <iostream>
#include <cassert>
using namespace std;

class Professor : virtual public Person {
private:
	double salary;
public:
	Professor(string name, double salary);
	~Professor();
	void print() const;
};

#endif