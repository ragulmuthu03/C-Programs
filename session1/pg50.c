#include<stdio.h>
#include<limits.h>

int main(){
	printf("Enter No of numbers : ");
	int i,n,biggest=INT_MIN,smallest=INT_MAX;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
		biggest=(arr[i]>biggest)?arr[i]:biggest;
		smallest=(arr[i]<smallest)?arr[i]:smallest;
	}
	printf("%d",biggest-smallest);
	return 0;
}
