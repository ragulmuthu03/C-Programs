// (f) If the ages of Ram, Shyam and Ajay are input through the keyboard,
// write a program to determine the youngest of the three.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the ages of Ram, Shyam and Ajay : ");
    scanf("%d %d %d", &a, &b, &c);

    if(a < b && a < c) printf("Ram");
    else if(b < c && b < a) printf("Shyam");
    else if(c<a && c<b) printf("Ajay");
    
    return 0;
}