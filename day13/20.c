#include<stdio.h>

int main(){
	
	int i = 2000 , n = 3000;
	
	for(i==2000;i<=n;i++){
		
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
	}
	
	return 0;
}