//#include <iostream>
//using namespace std;
//
//int main() {
//	class A {
//	public:
//		virtual void f() { cout << "A::f()" << endl; }
//	};
//	class B : public A {
//	public:
//		void f() { cout << "B::f()" << endl; }
//	};
//
//	A* a = new B();
//	a->f();	// Output: B::f()
//	delete a;
//
//	return 0;
//}