#include<stdio.h>

int main(){
	
	int n,m,c=0,d=0,v=0,sum=0;
	
	printf("enter size : ");
	scanf("%d",&n);
	printf("enter size : ");
	scanf("%d",&m);
	
	int a[n][m];
	int i , j;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("enter value [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	int b[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		   b[j][i] = a[i][j];
	    }
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}