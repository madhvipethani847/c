#include<stdio.h>

int main(){
	
	int m , n,d=1,e;
	
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
	for(i=0;i<n;i++){
		d = d * a[i][j];
	}
	
	e = d/n;
	printf("%d",e);
	
	
	
	return 0;
}