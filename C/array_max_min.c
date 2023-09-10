#include<stdio.h>
// #define size 20

int main() {
    int size;
    int n;
    scanf("%d %d",&size,&n);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                int max = arr[size-1];
            }
        }
    }
    if(n==1) {
        printf("%d",arr[0]);
    }
    if(n==2) {
        printf("%d",arr[size-1]);
    }
    return 0;
}