#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	 printf("enter A = ");
    scanf("%d",&a);
    
    printf("enter B = ");
    scanf("%d",&b);
    
    printf("enter C = ");
    scanf("%d",&c);
    
    printf("enter D = ");
    scanf("%d",&d);
    
    if(a==b && b==c && c==d ){
    	printf("all are same!");
	}
	else{
	
    
    if(a>b){
    	
    	if(a>c){
    		
    		if(a>d){
    			
    			printf("A is max.");
    			
			}
    		else{
    			
    			printf("D is max.");
    			
			}
		}
    	else{
    		
    		if(c>d){
    			
    			printf("C is max.");
    			
			}
    		else{
    			
    			printf("D is max.");
    			
			}
		}
	}
	else{
		
		if(b>c){
			
			if(b>d){
				
				printf("B is max.");
				
			}
			else{
				
				printf("D is max.");
				
			}
		}
		else{
			
			printf("D is max.");
			
		}
	}
}
	return 0;
}