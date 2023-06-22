#include<stdio.h>

int main(){
	
	int n ,i,m;
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
	int b[n];
	m=n;
	for(i=0;i<n;i++){
		
		b[i]=m;
		m--;
	}
	printf("\n\n");
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	
	
	return 0;
}