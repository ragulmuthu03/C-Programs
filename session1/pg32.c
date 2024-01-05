#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Enter the sides of the triangle:");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a==b && b==c)
    printf("equivalent triangle");
    else if (a==b || b==c || a==c)
    printf("Isosceles triangle");
    else if (pow(a,2)+pow(b,2)==pow(c,2) || pow(a,2)+pow(c,2)==pow(b,2) || pow(c,2)+pow(b,2)==pow(a,2))printf("right angled triangle");
    else 
    printf("scalene triangle");
    return 0;
}