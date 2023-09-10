// // #include<stdio.h>
// // #include<stdlib.h>
// // #include<strings.h>
// // #define MAX_SIZE 100

// // int precendense(char operator) {
// //     if(operator == '+'|| operator == '-'){
// //         return 1;
// //     }
// //     if(operator == '*' || operator == '/'){
// //         return 2;
// //     }
// //     return 0;
// // }

// // int isoperator(char character) {
// //     return (character == '+'|| character == '-' || character == '*' || character == '/');
// // }

// // void infixtopostfix(char infix[], char postfix[]) {
// //     char stack[MAX_SIZE];
// //     int top = -1;
// //     int i,j = 0;
    
// //     for(i = 0; infix[i] != '\0'; i++) {
// //         char current = infix[i];

// //     // If the current character is an operand add it to the postfix expression 
    
// //     }
// // }

// // int main() {
// //     char infix[MAX_SIZE];
// //     char postfix[MAX_SIZE];

// //     printf("Enter an expression: ");
// //     scanf("%s",infix);

// //     infixtopostfix(infix,postfix);

// //     printf("Postfix expression is: %s",postfix);
// //     return 0;
// // }

// #include<stdio.h>

// int main() {
//     float a = 5;
//     switch (a)
//     {
//     case 5: printf("OOP") ;
        
    
//     default:
//         printf("CPP");
//     }
// }

// #include<stdio.h>
// int main() {
//     const int arr[] = {1,2,3,4,5};
//     const int * ptr = arr;
//     printf("%d\n",*ptr++);
//     printf("%d",*ptr++);
// }
#include<stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("\nArray before sorting: ");
    
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    int temp = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n Array after sorting: ");
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}