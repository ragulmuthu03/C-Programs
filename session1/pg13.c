#include <stdio.h>
#include <math.h>
int main() 
{
    int angle;
    printf("Enter the angle of a triangle:\n");
    scanf("%d",&angle);
    printf("cos: %f\n",(double)sin(angle));
    printf("cos: %f\n",(double)cos(angle));
    printf("tan: %f\n",(double)tan(angle));
    printf("tan^-1: %f\n",(double)atan(angle));
    return 0;
}