#include<stdio.h>

int main(){
	
	int a,b,c,d,e;
	
	printf("enter value of A = ");
	scanf("%d",&a);
	
	printf("enter value of B = ");
	scanf("%d",&b);
	
	printf("enter value of C = ");
	scanf("%d",&c);
	
	printf("enter value of D = ");
	scanf("%d",&d);
	
	printf("enter value of E = ");
	scanf("%d",&e);
	
	if(a>b){
		
		if(a>c){
			
			if(a>d){
				
				if(a>e){
					printf("a is max.");
				}
				else{
					printf("e is max.");
				}
			}
			else{
				if(d>e){
					printf("d if max.");
				}
				else{
					printf("e is max.");
				}
			}
		}
		else{
			
			if(c>d){
				
				if(c>e){
					printf("c is max.");
				}
				else{
					printf("e is max.");
				}
			}
			else{
				
				if(d>e){
					printf("d is max.");
				}
				else{
					printf("e is max.");
				}
			}
		}
		
		
	}
	else{
		
		if(b>c){
			
			if(b>d){
				
				if(b>e){
					printf("b is max.");
				}
				else{
					printf("e is max.");
				}
			}
			else{
				
				if(d>e){
					printf("d is max.");
				}
				else{
					printf("e is max.");
				}
			}
		}
		else{
			
			if(c>d){
				
				if(c>e){
					printf("c is max.");
				}
				else{
					printf("e is max.");
				}
			}
			else{
				
				if(d>e){
					printf("d is max.");
				}
				else{
					printf("e is max.");
				}
			}
		}
		
	}
	
	
	return 0;
}
