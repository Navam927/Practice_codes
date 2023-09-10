#include<stdio.h>
#define MAX 40
#include<string.h>

char input[MAX];
char output[MAX];

int top = -1;
int count = 0;

void push(char s) {
    top = top + 1;
    input[top] = s;
}

void pop() {
    output[count] = input[top];
    top = top - 1;
    count = count + 1;
}

int main() {
    char str[MAX];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    
    for(int i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }

    for(int i = 0; i <= strlen(str); i++)
    {
        pop();
    }

    for(int i = 0; i <= strlen(str); i++)
    {
        printf("%c",output[i]);
    }
    printf("\n");
    return 0;
}