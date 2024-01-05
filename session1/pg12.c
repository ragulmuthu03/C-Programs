#include <stdio.h>
#include <math.h>
int main() 
{
    int t,v;
    printf("Enter values for t temperature:\n");
    scanf("%d",&t);
    printf("Enter values for v wind velocity:\n");
    scanf("%d",&v);
    double wcf = 35.74 + 0.6215*t + ( 0.4275*t - 35.75 ) * pow(v,0.16);
    printf("Wind Chill Factor: %f",wcf);
    return 0;
}