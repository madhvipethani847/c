#include<stdio.h>

int main(){

	int n,m;
	printf("Enter size of row:");
	scanf("%d",&m);

	printf("Enter size of colum:");
	scanf("%d",&n);

	int i,j;
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter value[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}

	int sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				sum+=a[i][i];
			}
		}
	}
	printf("\nmain diagonal elements sum is = %d\n",sum);
	return 0;
}
