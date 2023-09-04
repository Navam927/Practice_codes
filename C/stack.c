#include<stdio.h>
#define MAX 4

int stac[4];
int top = -1;

void push(int data) 
{
    if(top == MAX-1){
        printf("Stack Overflow");
        return;
    }
    top = top + 1;
    stac[top] = data;
}

void print() {
    for(int i = 0; i < MAX; i++) {
        printf("%d\n",stac[i]);
    }
}
int main() {
    push(4);
    print();
    push(6);
    print();
    push(3);
    push(1);
    return 0;
}