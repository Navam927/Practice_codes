/* Question 7. Write C Program to calculate Modulo of given numbers using  macros.

Input: 13,3
Output: Result: 1

Input: 90,8
Output: Result: 2
*/
#include<stdio.h>
#define modulo(a,b) (a%b)
void mod_finder() {
    int a,b;
    printf("Input: ");
    scanf("%d %d",&a,&b);
    int Result = modulo(a,b);
    printf("Result : %d",Result);
}
int main() {
    mod_finder();
    return 0;
}