#include<Stdio.h>
#include<stdlib.h>


int main() {
    int *ptr;
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    // Dynamicaly allocating memory using malloc
    ptr = (int*)malloc(n*sizeof(int));
    
    if(ptr == NULL || ptr == '\0'){
        printf("Memory not allocated");
    }
    else{
        printf("Memory allocation was successful");
        for(int i = 0; i < n; ++i) {
            ptr[i] = i+1;
        }
        printf("\nElements of array are: ");
        for(int i = 0; i < n; ++i){
            printf("%d ",ptr[i]);
        }
    }
}