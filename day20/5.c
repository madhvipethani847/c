#include<stdio.h>

int main(){
	
	int n,c=0,d=0,v=0,sum=0;
	
	printf("enter size : ");
	scanf("%d",&n);
	
	
	int a[n][n];
	int i , j;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("enter value [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	int b[n][n];
	
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("enter value [%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n\n");
	int x[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			x[i][j] = a[i][j] + b[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",x[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}