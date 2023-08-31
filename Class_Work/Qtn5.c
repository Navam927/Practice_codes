/*Question 5.Write C Program to print the name of the current executing function in C using predefined macros.*/
#include<stdio.h>
void random_function() {
    printf("Name of this function is: %s",__func__);
}
int main() {
    random_function();
    return 0;
}