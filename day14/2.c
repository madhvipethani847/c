#include<stdio.h>

int main(){
	
	int i=1,n,a;
	
	printf("enter value : ");
	scanf("%d",&n);
	
	while(i<=10){
		
		printf("%d",n);
		printf(" * ");
		printf("%d",i);
		printf(" = ");
		printf("%d\n",n*i);
		
		i++;
			
	}
	
	return 0;
}