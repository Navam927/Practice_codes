#include<stdio.h>
struct  student
{
    int id;
    int marks;
};



int main() {
    struct student navam,mohit,anurag;
    navam.id = 12;
    mohit.id = 13;
    anurag.id = 14;
    navam.marks = 50;
    mohit.marks = 75;
    anurag.marks = 100;
    printf("Navam has %d roll no and %d marks",navam.id,navam.marks);
    return 0;
}