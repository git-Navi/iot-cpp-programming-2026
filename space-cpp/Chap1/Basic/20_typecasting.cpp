// computer, tv, audio 3가지가 있고 각각 price가 있다.
// customer가 buy()라는 함수를 가지고 있는데, 이 함수는 price가 있는 객체를 구매하는 함수.
// typecasting으로 만든다.

#include <iostream>
using namespace std;

class Product {
	int price;
	string name;
public:
	Product(int p, string n) : price(p), name(n) {}

	int getPrice() {
		return price;
	}
};

// 상속 사용

class Tv : public Product {
public:
	Tv() : Product(300, "TV") {}
};

class Computer : public Product {
public:
	Computer() : Product(300, "Computer") {}
};

class Audio : public Product {
	public:
	Audio() : Product(400, "Audio") {}
};

class Customer {
public:
	int money = 1000;

	// 1. Method overloading 제품마다 buy() 함수를 만들어야 한다.
	/*void buy(Tv tv) {
		money -= tv.price;
	}

	void computer(Computer computer) {
		money -= computer.price;
	}

	void buy(Audio audio) {
		money -= audio.price;
	}*/

	// 2. Typecasting 제품마다 buy() 함수를 만들 필요가 없다. Product 클래스의 포인터를 매개변수로 받는 buy() 함수를 하나만 만들면 된다.
	/*template<typename T>

	void buy(T item) {
		money -= item.price;
	}*/

	// 3. Typecasting + Polymorphism Product 클래스의 포인터를 매개변수로 받는 buy() 함수를 하나만 만든다.
	// buy() 함수는 Product 클래스의 포인터를 매개변수로 받는다. 그리고 buy() 함수 안에서 Product 클래스의 price 멤버 변수를 사용한다.
	void buy(Product& product) {
		money -= product.getPrice();
	}

	void showMoney() {
		cout << "남은 돈: " << money << endl;
	}
};

int main() {
	Customer customer;
	Tv tv;
	Computer computer;
	Audio audio;

	// Typecasting
	customer.buy(tv);
	customer.buy(computer);
	customer.buy(audio);
	customer.showMoney();

	return 0;
}