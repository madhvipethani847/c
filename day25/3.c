#include<stdio.h>

int len(char b[]){
    int i=0;
    
   for(i=0;b[i]!='\0';i++){

   }
  printf("Len : %d",i);
}

int main(){
	
	char a[20];
	
	printf("enter value : ");
	scanf("%s",&a);
	 
	len(a);
	
	
	return 0;
}