/*Write C Program to Find Maximum of two numbers using predefined macros.

Input: 5,10
Output: The maximum number is: 10
*/
#include<stdio.h>
#define a_maximum(a,b) (a>b)
void checker() {
    int a,b;
    printf("Input: ");
    scanf("%d %d",&a,&b);
    if a_maximum(a,b){
        printf("The maximum number is %d",a);
    }
    else{
        printf("The maximum number is %d",b);
    }
}
int main() {
    checker();
    return 0;
}