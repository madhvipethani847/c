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
	v=n-1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			if(i==j){
				c += a[i][i];
			}	
		} 
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			if(i+j==v){
				d+=a[i][j];
			}	
		} 
	}
	
	printf("%d ",c);
	printf("\n%d",d);
	 sum = c+d;
	 printf("\n%d",sum);	
	return 0;
}