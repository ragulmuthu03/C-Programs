#include<stdio.h>

int main(){
	int sticks=21,i=0,n,rem,random;
	while(i<sticks){
		printf("\nPlayer : ");
		scanf("%d",&n);
		i+=n;
		rem=21-i;
		printf("Remaining : %d",rem);
		if(i<sticks-4) {
			random=rand()%4+1;
			i+=random;
			printf("\nComputer : %d",random);	
			rem=21-i;
			printf("\nRemaining : %d",rem);
		}
		else{
			if(i==20){
				printf("\nUser wins");
				return 0;
			}
			random=21-i-1;
			i+=random;
			printf("\nComputer : %d",random);
			printf("\nComputer wins");
			return 0;
		}
	}
}
