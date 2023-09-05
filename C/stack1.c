#include<stdio.h>


int top = -1;
int stack[4];

void push(int data) {
    if(top > 3) {
        printf("Stack Overflow");
        return;
    }
    top = top + 1;
    stack[top] = data;
}

void print() {
    if(top == -1) {
        printf("Stack is empty\n");
    }
    for(int i = top; i >= 0; i--){
        printf("%d ",stack[i]);
    }
}

int pop() {
    if (top == -1){
        printf("Stack is empty");
        return 0;
    }
    else {
        top = top - 1;
        int value = stack[top];
        printf("%d",value);
    }
}

int main() {
    push(2);
    push(6);
    push(3);
    pop();
    push(1);
    print();
    
}