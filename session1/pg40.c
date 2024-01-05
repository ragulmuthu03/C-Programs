// (d) Write a program to receive value of an angle in degrees and check
// whether sum of squares of sine and cosine of this angle is equal to
// 1.

#include<stdio.h>

int main(){
    int angle;
    printf("Enter an angle : ");
    scanf("%d", &angle);
    (angle >= 0 && angle <= 360) ? ( (angle * angle) + (angle * angle) == 1) ? printf("Sum of squares of sine and cosine of this angle is equal to 1") : printf("Sum of squares of sine and cosine of this angle is not equal to 1") : printf("Angle is not between 0 and 360");
    return 0;
}