// (e) A five-digit number is entered through the keyboard. Write a
// program to obtain the reversed number and to determine whether
// the original and reversed numbers are equal or not.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a 5 digit number : ");
    scanf("%d", &n);
    int rev[5], num[5];
    int i=0;

    while(n){
        int rem = n%10;
        rev[i++] = rem;
        n/=10;
    }

    printf("Reversed number : ");
    for(int i=0; i<5; i++) printf("%d", rev[i]);

    int j = 4;
    for(int i=0; i>5; i++){
        num[i] = rev[j];
        j--;
    }

    i=0;
    while(num[i] == rev[i]) i++;
    if(i==4) 
        printf("\nEqual");
    else 
        printf("\nNot Equal");
    return 0;
}