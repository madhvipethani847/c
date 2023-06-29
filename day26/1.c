#include<stdio.h>

int main(){
	 
	 int a[] = {2,3,4,5,6,7,8,9};
	 int *b;
	 int i;
	 
	 for(i=0;i<8;i++){
	 	
	 	b=&a[i];
	 	printf("%p => %d => %d\n",b,*b,(*b)*(*b));
	 	
	 }
	 
	return 0;
}