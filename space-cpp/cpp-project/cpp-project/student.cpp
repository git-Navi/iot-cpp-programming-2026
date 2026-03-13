#include "student.h"

Student::Student(string name, double gpa) : name(name), gpa(gpa) {
	assert(gpa >= 0.0 && gpa <= 4.0);
}