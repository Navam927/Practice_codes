// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>


// int compare(const void  *a, const void *b) {
//     return (*(int *)a - *(int *)b);
// }
// int main() {
//     int i;
//     int size;
//     printf("Enter size of array: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter an array: ");
//     for(int i= 0 ; i<= 20; i++) {
//         scanf("%d",arr[i]);
//     }
//     qsort(arr,size,sizeof(int),compare);
//     for(i = 0; i < size; i++) {
//         printf("%d",arr[i]);
//     }
// }

#include<stdio.h>
#define max 20
char stack[max];
top = -1;

void push(char s) {
    top ++;
    stack[top] = s;
}

char pop() {
    char value = stack[top];
    top--;
    return value;
}


int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    char brac[size];
    printf("Enter brackets: ");
    scanf("%s",&brac);
    printf("%s",brac);

    int stack[size];
    int top = -1;

    for(int i = 0; i < size; i++) {
        if((brac[i] == '(')|| (brac == '[') || (brac == '{')) {
            push(brac[i]);
        }
        else if((brac[i] == ')' || (brac[i] == '}') || brac[i] == ']')) {
            if(top == -1 ) {
                printf("Unbalanced brackets!");
                return 0;
            }
            char brac = pop();
            if((pop == ')' && (brac != '('))||
                (pop == '{') && (brac != '}')||
                (pop == '[') && (brac != ']')) 
                {
                    printf("Unbalanced brackets!");
                }
                return 0;

        }
    }
    if(top == -1) {
        printf("Balanced brackets");
    }
    else{
        printf("Unbalanced brackets");
    }
    return 0;
}