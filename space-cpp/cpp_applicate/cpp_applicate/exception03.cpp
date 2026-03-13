#include <iostream>
using namespace std;

int main() {
	try {
		cout << "1" << endl;
		cout << "2" << endl;
		cout << "3" << endl;
		cout << "4" << endl;
		throw 1;
		cout << "5" << endl;
	}
	catch (const std::exception&) {
		cout << "6" << endl;
	}
	catch (int) {
		cout << "7" << endl;
	}
	catch (const char* e) {
		cout << "8" << endl;
	}
	cout << "9" << endl;
}