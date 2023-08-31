// Question 1. Write C Program to print current Date and Time Using predefined macros.
#include<stdio.h>
int main() {
    printf("Current date is: %s\n",__DATE__);
    printf("Current time is: %s",__TIME__);
    return 0;
}