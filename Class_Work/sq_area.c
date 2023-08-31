#include<stdio.h>
#define squareArea(side) ((side)*(side))
#define PI 3.14
#define circleArea(radius) (PI*radius*radius)
int main() {
    printf("Square area = %d",squareArea(10));
    printf("\nCircle Area = %f",circleArea(7));
    return 0;
}