#include<stdio.h>

int main(){
	
	int m , n;
	
	printf("enter size of row : ");
	scanf("%d",&n);
	
	printf("enter size of colum : ");
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
	printf("\n");
	
	int b[n][m];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("enter value [%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	int c[n][m];
        for(i=0;i<n;i++){
        	for(j=0;j<m;j++){
        		c[i][j] = a[i][j] + b[i][j];
        		printf("%d",a[i][j]);
			}
			printf("\n");
		}
	
	
	return 0;
}