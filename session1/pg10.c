#include <stdio.h>
#include <math.h>
int main() 
{
    int a,b;
    printf("Enter the cartesian coordinates:\n");
    scanf("%d %d",&a,&b);
    int x = sqrt((a*a)+(b*b));
    int y = atan(x);
    printf("Polar co-rdinates: %d %d",x,y);
    return 0;
}