#include<stdio.h>
struct  student
{
    int id;
    int marks;
};

struct student sharma,roojam,rana;
void value_giver(){
    sharma.id = 1;
    roojam.id = 2;
    rana.id = 3;
    printf("\nRana ji has id = %d",rana.id);
}

int main() {
    struct student navam,mohit,anurag;
    navam.id = 12;
    mohit.id = 13;
    anurag.id = 14;
    navam.marks = 50;
    mohit.marks = 75;
    anurag.marks = 100;
    printf("Navam has %d roll no and %d marks",navam.id,navam.marks);
    value_giver();
    return 0;

}