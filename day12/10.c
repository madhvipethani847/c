#include<stdio.h>

int main(){
	
	int i = 2000 , n = 3000;
	
	while(i<=n){
		
		if(i%400 == 0){
		
			printf("%d\n",i);
		}
		else if(i%4 == 0){
			printf("%d\n",i);
			
		}
		else if(i%40 == 0){
			printf("%d\n",i);
		}
		else if(i%4000 == 0){
			printf("%d\n",i);
		}
		else{
		}
		i++;
	}
	
	return 0;
}