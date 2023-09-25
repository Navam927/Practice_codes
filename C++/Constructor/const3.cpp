#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
       Point(int a, int b){
           x = a;
           y = b;
       }
       void displayPoint(){
           cout<<"Your point is ("<<x<<","<<y<<")"<<endl;
       };
};

int main() {
    Point a(2,3);
    a.displayPoint();
    Point b = Point(69,69);
    b.displayPoint();
    return 0;
}