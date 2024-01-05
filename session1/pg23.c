// (h) Write a program to find the absolute value of a number entered
// through the keyboard.

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    printf("absolute value : %d", abs(n));
}