#include<stdio.h>

int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	int arr[n];
	arr[
	0]=0,arr[1]=1;
	if(n<2) return arr[n];
	for(int i=2;i<n;i++) arr[i]=arr[i-1]+arr[i-2];
	printf("%d",arr[n-1]);
	return 0;
}
