#include<iostream>
using namespace std;

class random{
    public:
    string sirname;
    void printname();
    int rollno;
    void printid();
};

void random::printname() {
    cout<<"My name is Navam "<<sirname;
}

void random::printid() {
    cout<<"\nMy roll no is "<<rollno;
}

int main() {
    random obj1;
    obj1.sirname = "Sharma";
    obj1.rollno = 27;
    obj1.printname();
    obj1.printid();
    return 0;
}