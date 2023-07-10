#include<stdio.h>

int main(){
	
	FILE *p;
	
	char adress[20];
	
	p = fopen ("adress.txt","r");
	
	if(p==NULL){
		printf("error");
	}
	else{
		fgets(adress,20,p);
		puts(adress);
		fclose(p);
	}
	
	return 0;
}