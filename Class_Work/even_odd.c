#include<stdio.h>
#define iseven(number) (number % 2 ==0)
#define isodd(number) (number % 2!= 0)
void check(int number){
    if(iseven(number)){
        printf("%d is even\n",number);
    }
    else{
        printf("%d is odd",number);
    }
}
    int main() {
        int number = 3;
        check(number);
        return 0;
}
