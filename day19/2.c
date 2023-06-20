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
	
	printf("%d",sizeof(a))/sizeof(a[0][0]);
	
	
	
	
	return 0;
}