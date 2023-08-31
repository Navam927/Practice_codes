#include<iostream>
using namespace std;
int sum(int a, int b){
    int result = a + b;
    return result;
}
int subtraction(int a, int b){
    int result = a-b;
    return result;
}
int division(int a, int b){
    int result = a/b;
    return result;
}
int multiplication(int a, int b){
    int result = a*b;
    return result;
}
int main() {
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    char k;
    cout<<"Choose operator '+', '-','/','*':  ";
    cin>>k;
    if(k=='+'){
        int result = sum(a,b);
        cout<<"The sum of numbers is: "<<result<<endl;
    }
    else if (k=='-')
    {int result = subtraction(a,b);
    cout<<"The subtraction of numbers is: "<<result<<endl;
        /* code */
    }
    else if(k =='*'){
        int result = multiplication(a,b);
        cout<<"The multiplication of numbers is: "<<result<<endl;
    }
    else if(k == '/'){
        int result = division(a,b);
        cout<<"The division of numbers is: "<<division<<endl;
    }

}