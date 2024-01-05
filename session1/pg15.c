#include <stdio.h>
#include <math.h>
int main() 
{
    int N;
    int count=0;
    int i=0;
    int arr[]={100,50,10,5,2,1};
    printf("Enter Amount:\n");
    scanf("%d",&N);
    while(N!=0)
    {
        if(N>arr[i])
        {
            count=N/arr[i];
            N %=arr[i];
        }
        i++;
    }
    printf("Total number of notes: %d",count);
    return 0;
}