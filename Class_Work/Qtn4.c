/*
Write C Program to concatenate two strings using  macros.
Input: Hello,World
Output: Concatenated string: HelloWorld */
#include<stdio.h>
#define concatenate(a,b) (a+b)

void concatenator() {
    char a[20];
    char b[20];
    printf("Input: ");
    scanf("%s %s",a,b);
    char result[50];
    concatenate(a, b);

    printf("Concatenated string: %s\n", a);
}

int main() {
    concatenator();
    return 0;
}

