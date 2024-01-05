#include<stdio.h>

int main(){
	int work[10],ot=0;
	printf("Enter the salary of 10 employees : ");
	for(int i=0;i<10;i++){
		scanf("%d",&work[i]);
		work[i]%=40;
		ot+=work[i]*12;
	}
	printf("Overtime Salary : %d",ot);
	return 0;
}
