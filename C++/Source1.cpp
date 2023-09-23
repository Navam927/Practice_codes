#include<iostream>
using namespace std;

class Complex {
	int a, b;
public:
	Complex(int, int); //Parameterized constructor 
	void printNumber() {
		cout << "Your number is " << a << "+" << b << "i";
	}
};

Complex::Complex(int x, int y) {
	a = x;
	b = y;
}

int main() {
	Complex a(2, 3);
	return 0;
}