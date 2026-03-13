#include "ta.h"

TA::TA(string name, double gpa, double salary) : Professor(name, salary), Student(name, gpa) {
	
}

TA::~TA() {
	// Destructor
}

void TA::print() {
	Professor::print();
	cout << "TA Name: " << name << endl;
	cout << "GPA: " << Student::gpa << endl;
	cout << "TA Salary: $" << salary << endl;
}