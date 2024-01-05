#include <stdio.h>

int main() 
{
    int input;
    int rem;
    int rev=0;
    scanf("%d",&input);
    while(input)
    {
        rem=input%10;
        rev = rev*10+rem;
        input/=10;
    }
    printf("Reverse: %d",rev);
    return 0;
}