#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class random{
    public:
    int id;
    navam() {
        cout<<"Default constructor called!";
        id = -1;
    }
    navam(int x){
        cout<<"Parameterized constructor called";
        id = x;
    }
};

int main() {
    random obj1;
    cout<<"Default id is: "<<obj1.id<<endl;
    navam obj2(21);
    cout<<"Para id is: "<<obj2.id;
    return 0;
}