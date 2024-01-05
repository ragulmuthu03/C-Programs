// (b) Write a program using conditional operators to determine whether
// a year entered through the keyboard is a leap year or not. 

#include<stdio.h>

int main(){
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);
    (year % 4 == 0) ? (year % 100 == 0 && year % 400 != 0) ? printf("Not a Leap Year") : printf("Leap Year") : printf("Not a leap Year");
    return 0;
}