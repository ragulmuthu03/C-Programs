// (g) In digital world colors are specified in Red-Green-Blue (RGB) format,
// with values of R, G, B varying on an integer scale from 0 to 255. In
// print publishing the colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format, with values of C, M, Y, and K varying on a real
// scale from 0.0 to 1.0. Write a program that converts RGB color to
// CMYK color as per the following formulae:
// White Max(Red / 255,Green / 255,Blue / 255)
// Note that if the RGB values are all 0, then the CMY values
// are all 0 and the K value is 1.

#include<stdio.h>

int main(){
    int r, g, b;
    float c, m, y, k, w;
    printf("Enter the RGB values : ");
    scanf("%d %d %d", &r, &g, &b);
    w = (r / 255.0 > g / 255.0 && r / 255.0 > b / 255.0) ? r / 255.0 : 
        (g / 255.0 > r / 255.0 && g / 255.0 > b / 255.0) ? g / 255.0 : b / 255.0;
    c = (w - r / 255.0) / w;
    m = (w - g / 255.0) / w;
    y = (w - b / 255.0) / w;
    k = 1 - w;
    printf("CMYK values are : %f %f %f %f", c, m, y, k);
    return 0;
}