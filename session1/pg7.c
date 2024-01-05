#include <stdio.h>
int main() 
{
    int input;
    int rem;
    int sum=0;
    scanf("%d",&input);
    while(input)
    {
        rem=input%10;
        sum += rem;
        input/=10;
    }
    printf("Sum of digits: %d",sum);
    return 0;
}