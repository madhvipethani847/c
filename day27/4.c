#include<stdio.h>

int len(char *b){
  
    int count;
     
    while(*b!=NULL){
    	
        count++;
		b++;  
		 
   }
  printf("Len : %d",count);
  
}

int main(){
	
	char a[90];
	
	
	printf("enter value : ");
    gets(a);
	 
	len(&a);
	
	return 0;
}