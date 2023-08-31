#include<stdio.h>
int main() {
    FILE *ptr;
    ptr = fopen("not.txt","w");
    if(ptr != NULL){
        printf("File oppened successfully");
    }
    else{
        printf("Error!");
    }
    return 0;
}