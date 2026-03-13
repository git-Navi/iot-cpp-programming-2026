#include "Professor.h"

Professor::Professor(string name, double salary) : Person(name), salary(salary) {
	assert(salary >= 0.0);
}

Professor::~Professor() {
	// Destructor
}

void Professor::print() const {
	cout << "Professor Name: " << name << endl;
	cout << "Salary: $" << salary << endl;
}