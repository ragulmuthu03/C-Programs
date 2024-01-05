#include <stdio.h>
int main() 
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("Enter the dimentions of a triangle:\n");
    float s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle: %f",area);
    return 0;
}