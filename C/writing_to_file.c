#include<stdio.h>
#include<string.h>

int main() {
    FILE *ptr;
    ptr = fopen("not.txt","a");
    if(ptr != NULL){
        printf("File oppened successfully\n");
    }
    else{
        printf("Error!");
    }
    char a[50];
    printf("Enter a string: ");
    scanf("%[^\n]",&a);
    for(int i = 0; i < strlen(a); i++){
        putc(a[i],ptr);
    }
    fclose(ptr);
    return 0;
}
