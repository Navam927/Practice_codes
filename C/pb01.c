/* Question: take input from user details of student (name,rollno) and display them using structures
*/
#pragma pack(1)
#include<stdio.h>
#include<string.h>

struct std {
    int roll;
    char name[20];
};

void details(struct std *s1) {
    printf("Enter name and roll no of students: ");
    scanf("%s %d", s1->name, &s1->roll);
};

void display(struct std s2) {
    printf("\nName\t\tRoll Number\n");
    printf("%s\t\t\t%d",s2.name,s2.roll);
}

int main() {
    int n;
    printf("Enter Number of students: ");
    scanf("%d",&n);
    struct std s3;
    details(&s3);
    display(s3);
    return 0;
}