/*Write C Program to terminate running program if input value is negative.
Input: 10
Output: All is well

Input: -5
Output: Assertion error*/
#include<stdio.h>
#define positive_number(a) (a>0)

void number_checker(){
    int n;
    printf("Input: ");
    scanf("%d",&n);
    if positive_number(n) {
        printf("Output: All is well\n");
        number_checker();
    }
    else{
        printf("Output: Assertion error");
    }
}
int main() {
    number_checker();
    return 0;
}