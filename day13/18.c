#include<stdio.h>

int main(){
	
	int n,i = 1,c=1;
	
	printf("enter value : ");
	scanf("%d",&n);
	
	for(i==1;i<=n;i++){
		
		c = i * c;
		
	}
	
	printf("%d",c);
		
	return 0;
}