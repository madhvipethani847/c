#include<stdio.h>

 int sum (int b[]){
	int c=0,i;
	
	for(i=0;b[i]!='\0';i++){
		
	    c += b[i];
			
	}
	
	printf("sum : %d",c);

}


int main(){
	
	int n;
	
	printf("Enter size :");
	
	scanf("%d",&n);
	
	int arr[n],i;
	
	for(i=0; i<n;i++){
		
		printf("Enter value [%d] :",i);
		scanf("%d",&arr[i]);
	
	}
	
	sum(arr);
	
	
	return 0;
	
}
