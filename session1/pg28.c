#include <stdio.h>

int main(){
    int year;

    printf("Enter the year:");
    scanf("%d",&year);
    
    if(year%4==0 && year%100!=0)printf("It is a leap year");

    else
    if(year%400==0 && year%100==0)printf("It is a leap year");

    else
    printf("It is a non leap year");
    return 0;
}