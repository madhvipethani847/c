#include<stdio.h>

int main(){
	int n,i;
	printf("enter value : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		printf("enter value of [%d] : ",i);
		scanf("%d",&a[i]);
	}
	
    printf("leangth of array : %d",sizeof(a)/sizeof(a[0]));
	
	return 0;
}