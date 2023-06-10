#include<stdio.h>

int main(){
	
	int i=1,n;
	
	printf("enter number = ");
	scanf("%d",&n);
	
    do{
		
		printf("%d\n",n);
		n--;
		
	}while(i<=n);
	
	
	return 0;
}