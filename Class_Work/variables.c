#include<stdio.h>
#define PI 3.14
#define FILE_SIZE 5
#undef FILE_SIZE
#if !defined(MESSAGE)
     #define MESSAGE "Your Wish...."
#endif 
int main() {
    printf("PI = %f\n",PI);
    return 0;
}