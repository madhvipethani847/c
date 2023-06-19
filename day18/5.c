#include<stdio.h>

int main(){
	int n,i,m,j;
	printf("enter value : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		printf("enter value of [%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	int b[n];
	
	for(j=0;j<n;j++){
		printf("enter value of [%d] : ",j);
		scanf("%d",&b[j]);
	}
	
	m = 2*n;
	
	int c[m];
	for(i=0;i<m;i++){
	
	    if(i<=n){
		c[i] = a[i];
		printf("%d",c[i]);
	     }
	    else{
		c[i] = b[j];
		printf("%d",c[i]);
	     }

    }
		
		
		
		return 0;
}
		
		
		
		
		
		
		