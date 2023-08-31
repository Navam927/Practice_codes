#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int og_n = n;
    int digit,sum = 0;
    while(n!=0){
        digit = n % 10;
        sum += pow(digit,3);
        n /= 10;
    }
    if(sum == og_n){
        printf("Armstrong number");
    }
    else{
        printf("%d",sum);
        printf("not armstrong");
    }
    return 0;
}