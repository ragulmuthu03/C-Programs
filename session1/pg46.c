#include<stdio.h>

int main(){
	int x,sum,digit;
	for(int i=1;i<=500;i++){
		x=i;
		sum=0;
		digit=(x>99)?3:(x>9)?2:1;
		while(x>0){
			sum+=pow(x%10,digit);
			x/=10;
		}
		if(sum==i) printf(" %d",i);
	}
	return 0;
}
