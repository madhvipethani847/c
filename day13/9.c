#include<stdio.h>

int main(){
	
	int n,i,c=0;
	
	printf("enter value : ");
	scanf("%d",&n);
	
	do{
		
		c = i + c;
		i++;
		
	}while(i<=n);
	
	printf("%d",c);
		
	return 0;
}