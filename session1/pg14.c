#include <stdio.h>
#include <math.h>
int main() 
{
    int C,D;
    int temp;
    printf("Enter two values to swap:\n");
    scanf("%d",&C);
    scanf("%d",&D);
    temp = C;
    C = D;
    D = temp;
    printf("value of C:%d ,D:%d",C,D);
    return 0;
}

