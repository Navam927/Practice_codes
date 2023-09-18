#include<iostream>
using namespace std;

class navam{
    public:
    string sirname;
    void printname() { cout<<"My name is Navam "<<sirname;}

};

int main() {
    navam obj1;
    obj1.sirname = "Sharma";
    obj1.printname();
    return 0;
}