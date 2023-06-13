#include<stdio.h>

int main(){
	
	int i,first_digit,last_digit;
	
	printf("enter value :");
	scanf("%d",&i);
	
	last_digit = i%10;
	
	while(i>9){
		i=i/10;
		
	}
	first_digit = i;
	printf("sum of first and last digit : %d",first_digit+last_digit);
	
	return 0;
}