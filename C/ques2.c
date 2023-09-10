#include<stdio.h>
#include<string.h>

enum week{sun,mon,tue,wed,thu,fri,sat};

int main() {
    enum week day;
    scanf("%d",&day);
    switch(day) {
        case sun: printf("Sunday"); break;
        case mon: printf("Monday"); break;
        case tue: printf("tuesday"); break;
        case wed: printf("Wednesday"); break;
        case thu: printf("Thrusday"); break;
        case fri: printf("Friday"); break;
        case sat: printf("saturday");
    }
    return 0;
}