#include<stdio.h>

int sum(int a, int b) {
    printf("Sum is %d\n",a+b);
}

int diff(int a, int b) {
    printf("Diff is %d\n",a-b);
}

int mul(int a, int b) {
    printf("Mul is %d\n",a*b);
}
int div(int a, int b) {
    printf("Div is %d\n",a/b);
}
void ans(int a, int b, int (*ptr)(int,int)) {

}
int main() {
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);
    int input;
    printf("Enter 0 for sum 1 for diff 2 for mul and 3 for div: ");
    printf("Enter your choice 0,1,2,3: ");
    scanf("%d",&input);
    int (*ptr[])(int a, int b) = {sum,diff,mul,div};
    (*ptr[input])(a,b);
}