#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum size for the expression and stack
#define MAX_SIZE 100

// Define the precedence of operators
int precedence(char operator) {
    if (operator == '+' || operator == '-')
        return 1;
    if (operator == '*' || operator == '/')
        return 2;
    return 0;
}

// Function to check if a character is an operator
int isOperator(char character) {
    return (character == '+' || character == '-' || character == '*' || character == '/');
}

// Function to convert infix expression to postfix expression
void infixToPostfix(char infix[], char postfix[]) {
    char stack[MAX_SIZE];
    int top = -1; // Initialize the stack top to -1
    int i, j = 0;

    for (i = 0; infix[i] != '\0'; i++) {
        char current = infix[i];

        // If the current character is an operand, add it to the postfix expression
        if ((current >= '0' && current <= '9') || (current >= 'a' && current <= 'z') || (current >= 'A' && current <= 'Z')) {
            postfix[j++] = current;
        }
        // If the current character is an open parenthesis, push it onto the stack
        else if (current == '(') {
            stack[++top] = current;
        }
        // If the current character is a closing parenthesis, pop operators from the stack and add to the postfix until an open parenthesis is encountered
        else if (current == ')') {
            while (top >= 0 && stack[top] != '(') {
                postfix[j++] = stack[top--];
            }
            // Pop the open parenthesis from the stack
            if (top >= 0 && stack[top] == '(') {
                top--;
            }
        }
        // If the current character is an operator, pop operators from the stack and add to the postfix if they have higher or equal precedence
        else if (isOperator(current)) {
            while (top >= 0 && precedence(stack[top]) >= precedence(current)) {
                postfix[j++] = stack[top--];
            }
            // Push the current operator onto the stack
            stack[++top] = current;
        }
    }

    // Pop any remaining operators from the stack and add to the postfix
    while (top >= 0) {
        postfix[j++] = stack[top--];
    }

    // Null-terminate the postfix expression
    postfix[j] = '\0';
}

int main() {
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
