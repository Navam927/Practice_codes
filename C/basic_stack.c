#include<stdio.h>
#define max_size 40

int stack[max_size];
int top = -1;


void push(int n) {
    if(top >= max_size -1){
        printf("Stack Overflow!!");
        return;
    }
    top ++;
    stack[top] = n;
}

int pop() {
    if(top == -1) {
        return 0;
    }
    top--;
    int value = stack[top];
    return value;
}

void print() {
    if(top == -1) {
        printf("stack empty");
        return;
    }
    for(int i = top; i >= 0; i--) {
        printf("%d",stack[i]);
    }
}

int main() {
    push(2);
    push(3);
    push(4);
    pop();
    pop();
    print();
    
    return 0;
}