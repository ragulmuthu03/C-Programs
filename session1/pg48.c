#include<stdio.h>

int main(){
	int nums,p=0,n=0,z=0,x;
	printf("Enter No of number : ");
	scanf("%d",&nums);
	for(int i=0;i<nums;i++){
		scanf("%d",&x);
		if(x>0) p++;
		else if (x==0) z++;
		else n++;
	}
	printf("Positive : %d\nNegative : %d\nZeros : %d",p,n,z);
	return 0;
}
