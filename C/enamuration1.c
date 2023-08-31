#include<stdio.h>
#include<string.h>
enum month {jan=1,feb,mar,april,may,june,july,aug,sep,oct,nov,dec};

int main(){
    char mon[12][10] = {"January","February","March","April","May","June","July","August","September","Octuber","November","December"};
    enum month present=jan;
    enum month future;
    future=dec;
    // for(int i=present+1;i<=future+1;i++){
    //     printf("%d ",i);
    // }
    while(present<=future){
        printf("%d\t\t\ %s\n",present,mon[present-1]);
        present++;
    }
}