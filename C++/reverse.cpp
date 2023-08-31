#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rev = 0,digit;
    int og_n = n;
    while(n!=0){
        digit = n % 10;
        rev = rev*10+digit;
        n /= 10;
    }
    cout<<"Reverse of number is: "<<rev<<endl;
    return 0;

}