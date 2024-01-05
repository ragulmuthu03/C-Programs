#include <stdio.h>

int main(){
    int w;
    printf("Enter the weight in pounds:");
    scanf("%d",&w);
    if (w<115) printf("Category: flyweight");
    else if (w>=115 && w<=121)
    printf("Category: Bantaweight");
    else if (w>=122 && w<=153)
    printf("Category: Featherweight");
    else if (w>=154 && w<=189)
    printf("Category: Middleweight");
    else if (w>=190)
    printf("Category: Heavyweight");
    else printf("Category: No Category");
    return 0;
}