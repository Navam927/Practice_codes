#include<stdio.h>
#define max 40

int precendence(char operator) {
    if(operator == '+' || operator == '-'){
        return 1;
    }
    if(operator == '*' || operator == '/'){
        return 2;
    }
}

int isoperator(char character) {
    return (character == '+' || character == '-' || character == '*' || character == '/');
}

void infixtopostfix(char infix[],char postfix[]){
    char stack[max];
    int top = -1;
    int i,j = 0;

    for(i = 0; infix[i] != '\0';i++) {
        char current = infix[i];

        if( (current >= 0 && current <=9) || (current >= 'a' && current <= 'z') || (current >= 'A' && current <= 'Z')) {
            postfix[j++] = current;
        }

        else if(current == '(') {
            stack[++top] = current;
        }

        else if(current == ')') {
            while(top >= 0 && stack[top] != '('){
                postfix[j++] = stack[top--];
            }
            stack[++top] = current;
        }

        else if(isoperator(current)) {
            while(top >= 0 && precendence(stack[top] >= precendence(current))) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = current;
            
        }

    }
    while(top >= 0){
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';
}


int main() {
    char infix[max];
    char postfix[max];
    printf("Enter infix expression: ");
    scanf("%s",&infix);
    infixtopostfix(infix,postfix);
    printf("\nPostfix expression is: %s",postfix);
    return 0;
}