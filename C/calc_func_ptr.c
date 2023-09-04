#include<stdio.h>
 
void add(int a, int b) {
    printf("Sum is %d",a+b);
}

void sub(int a, int b) {
    printf("Diff is %d",a-b);
}

void mul(int a, int b) {
    printf("Multiplication is %d",a*b);
}

void div(int a, int b) {
    printf("Division is %d",a/b);
}

int main() {
    void (*func_ptr[])(int, int) = {add,sub,mul,div};
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int n;
    printf("Enter \n 0- sum\n 1- sub\n 2- mul \n 3 - div: ");
    scanf("%d",&n);
    if(n == 4) return 0;
    (*func_ptr[n])(a,b);
    return 0;
}