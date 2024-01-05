#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter 3 points to check if it is in a straight line \n");
    scanf("%d %d %d %d %d %d",&x1, &y1, &x2, &y2, &x3, &y3);
	int a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
	if (a == 0)
		printf("Yes");
	else
		printf("No");
	return 0;
}
