// Structure - POINTER/fUNCTION AND Union
#include<stdio.h>
#include<string.h>
struct Emp{
    int id;
    char name;
};

int main() {
    struct Emp e;
    e.id = 102;
    e.name = 'A';
    // e.name = "Anirudha";
    strcpy(e.name,"Anirudha");
    scanf("%s",e.name);
    printf("Emp Name : %s \n",e.name);
    printf("Emp Id : %d \n",e.id);
}