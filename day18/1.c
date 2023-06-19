#include<stdio.h>

int main(){
	
	int n ,i;
	printf("enter value : ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++){
		printf("enter element : ",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}