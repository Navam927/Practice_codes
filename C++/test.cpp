#include<iostream>
using namespace std;
int evenSum(int n){
    return (n*(n+1));
}
int main() {
    int n;
    cout<<"Enter number upto which you want to calculate sum: ";
    cin>>n;
    int result = evenSum(n);
    cout<<result<<endl;
    return 0;
}