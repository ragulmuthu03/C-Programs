#include <stdio.h>

int main(){
    int h,t;
    float c;
    printf("enter the hardness of the steel:\n");
    scanf("%d",&h);
    printf("enter the carbon level of the steel:\n");
    scanf("%f",&c);
    printf("enter the tensile strength of the steel:\n");
    scanf("%d",&t);

    if (h>=50 && c<=0.5 && t>=5600)printf("Grade 10");
    
    else
    if (h>=50 && c<=0.5 && t<5600)printf("Grade 9");

    else
    if (h<50 && c<=0.5 && t>=5600)printf("Grade 8");

    else
    if (h>=50 && c>0.5 && t>=5600)printf("Grade 7");

    else
    if (h>=50 || c<=0.5 || t>=5600)printf("Grade 6");
 
    else printf("Grade 5");

    return 0;
}