#include<stdio.h>

int main(){
	
	int n,i,c=0;
	
	printf("enter value : ");
	scanf("%d",&n);
	
	while(i<=n){
		
		c = i + c;
		i++;
		
	}
	
	printf("%d",c);
		
	return 0;
}