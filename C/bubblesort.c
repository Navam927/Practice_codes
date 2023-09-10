#include<stdio.h>


int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements to array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("\n\nArray before sorting is: ");
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

    printf("\nArray after sorting is: ");
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    
}