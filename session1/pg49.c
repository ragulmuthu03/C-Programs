#include<stdio.h>

int main(){
	int n,reverse=0,octal=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n>0){
		reverse=reverse*10+(n%8);
		n/=8;
	}
	while(reverse>0){
		octal=octal*10+(reverse%10);
		reverse/=10;
	}
	printf("Octal : %d",octal);
	return 0;
}
