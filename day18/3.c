#include<stdio.h>

int main(){
	int n,i,d=1,e;
	printf("enter value : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		printf("enter value of [%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		d = d * a[i];
	}
	
	e = d/n;
	printf("%d",e);
	
	return 0;
}