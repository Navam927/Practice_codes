
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max 40

char stack[max];
int top = -1;

void push(char s) {
    stack[top] = s;
    top++;
}
char pop() {
    top--;
    char value = stack[top];
    return value;
}

int main() {
    char input[max];
    printf("Enter brackets: ");
    scanf("%s", input);

    for(int i = 0; i < strlen(input); i++){
        if(input[i] == '(' || input[i] == '[' || input[i] == '{') {
            push(input[i]);
        }

        else if(input[i] == ')' || input[i] == ']' || input[i] == '}') {
            if(top == -1){
                printf("Unbalanced brackets!");
                return 0;
            }
            char brac = pop();
            if( (input[i] == ')' && brac != '(') || (input[i] == ']' && brac != '[')|| (input[i] == '}' && brac != '{')) {
                printf("Unbalanced brackets!");
                return 0;
            }
        }
    }
    if(top == -1) {
        printf("Balanced brackets");
    }
    else{
        printf("Unbalanced brackets!");
    }
    return 0;
}