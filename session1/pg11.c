#include <stdio.h>
#include <math.h>
int main() 
{
    int l1,l2,g1,g2;
    printf("Enter the Latitude:\n");
    scanf("%d %d",&l1,&l2);
    printf("Enter the Longitude:\n");
    scanf("%d %d",&g1,&g2);
    double D = 3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-1));
    printf("Nautical miles distance: %f",D);
    return 0;
}