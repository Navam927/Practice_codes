#include<iostream>
using namespace std;
int c = 13;
int main() {
    // int a,b,c;
    // cout<<"Enter value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter value of b: "<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"Local value of c is "<<c<<endl;
    // cout<<"Global value of c is "<<::c;
    // return 0;
    float d = 34.4;
    double e = 34.4;
    float &a = d;
    cout<<d<<endl<<e<<endl<<a;
}