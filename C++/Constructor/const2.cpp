// Parameterized constructor 

#include<iostream>
using namespace std;

class Complex{
    int x,y;
    public:
       Complex(int,int);
       void printNumber(){
           cout<<"Your number is "<<x<<"+"<<y<<"i"<<endl;
       }
};
Complex::Complex(int a,int b){
    x = a;
    y = b;
}

int main() {
    Complex a(2,4);
    a.printNumber();
    Complex b = Complex(7,9);
    b.printNumber();
    return 0;
}