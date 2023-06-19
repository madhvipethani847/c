#include<stdio.h>

int main(){
	int n,i;
	printf("enter value : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		printf("enter value of [%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	int b[n];
	
	for(i=0;i<n;i++){
		printf("enter value of [%d] : ",i);
		scanf("%d",&b[i]);
	}
	printf("\n");
	int c[n];
        for(i=0;i<n;i++){
        	c[i] = a[i] + b[i];
        	printf("%d  ",c[i]);
		}
		
	return 0;
}
	
	