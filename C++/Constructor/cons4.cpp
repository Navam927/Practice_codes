// Constructor Overloading
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printNumber()
    {
        cout << "Value of your number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    Complex c1;
    c1.printNumber();
    Complex c2(5);
    c2.printNumber();
    Complex c3(2, 3);
    c3.printNumber();
    return 0;
}