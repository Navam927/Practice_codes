#include<stdio.h>
#define a = "True"
#define b = "false"
char reverse_checker(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int digit,rev=0,og_n;
    while(n!=0){
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    if(og_n==rev){
        printf("True");
    }
    else{
        printf("False");
    }
    
}
int main() {
    reverse_checker();
   
    return 0;
}