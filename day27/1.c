#include<stdio.h>

int swap(int *x,int *y){
	
	int z;
	
	z = *x;
	*x = *y;
	*y = z;
	
	printf("A : %d\n",*x);
	printf("B : %d",*y);
	
}
int main(){
	
	int a,b;
	
	printf("enter A : ");
	scanf("%d",&a);
	
	printf("enter B : ");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	
	return 0;
}