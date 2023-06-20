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

for(j=0;j<n;j++){
	float sum=0;
	for(i=0;i<n;i++){
		sum+=a[i][j];
	}
	printf("the sum of elements of a column in a matrix=%f\n",sum);
}

	return 0;
}