#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:

    Complex(void); //Constructor declaration.
    void printNumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

Complex::Complex(void)
{
    a = 0;
    b = 0;
}

int main() {
    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
}