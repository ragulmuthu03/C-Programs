// (c) Write a program to find the greatest of the three numbers entered
// through the keyboard. Use conditional operators.

#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    (a > b && a > c) ? printf("%d is the greatest", a) : (b > a && b > c) ? printf("%d is the greatest", b) : printf("%d is the greatest", c);
    return 0;
}