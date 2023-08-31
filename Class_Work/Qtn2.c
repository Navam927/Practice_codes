/*Question 2.
Write C Program to Swap two numbers using predefined macros.
Input: 5,10
Output: Before swap: x = 5, y = 10
        After swap: x = 10, y = 5
*/
#include<stdio.h>
#define swap(x,y) (x=y&y=x)
int main(){
    int x = 1, y = 2;
    printf("%d %d",swap(x,y));
    return 0;
}