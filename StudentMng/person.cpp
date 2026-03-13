#include "person.h"

Person::Person(string name)
	:name(name)
{

}

Person::~Person() {

}

void Person::print() {
	cout << "이름: " << name << endl;
}