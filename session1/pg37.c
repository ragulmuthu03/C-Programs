// (a) Using conditional operators determine:
// (1) Whether the character entered through the keyboard is a
// lower case alphabet or not.
// (2) Whether a character entered through the keyboard is a special
// symbol or not.

#include<stdio.h>

int main(){
    char a;
    printf("Enter a character : ");
    scanf("%s", &a);

    (a >= 'a' && a <= 'z') ? printf("Lower case alphabet") :
    printf("Not a lower case alphabet");

    ( (a >= 0  && a <= 47) ||  
      (a >= 58 && a <= 64) ||  
      (a >= 91 && a <= 96) ||  
      (a >= 123) ) ?  
      printf("\nCharacter Entered Is a Special Symbol\n") :  
      printf("\nCharacter Entered Is not a Special Symbol\n");  


    return 0;
}