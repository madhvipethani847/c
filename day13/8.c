#include<stdio.h>

int main(){
	
	int i=1,n;
	
	printf("enter number = ");
	scanf("%d",&n);
	
	do{
		
		if(i%2==1){
		    printf("%d\n",i);
		    
		}
		else{
		    
		}
		i++;
		
	}while(i<=n);
	
	
	return 0;
}