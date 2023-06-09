#include<stdio.h>

int main(){
	
	int n,i = 1,c=1;
	
	printf("enter value : ");
	scanf("%d",&n);
	
	while(i<=n){
		
		c = i * c;
		i++;
		
	}
	
	printf("%d",c);
		
	return 0;
}