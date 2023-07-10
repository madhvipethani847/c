#include<stdio.h>

int main(){
	
	FILE *p;
	
	char adress[20];
	
	p = fopen ("adress.txt","w");
	
	if(p==NULL){
		printf("error");
	}
	else{
		printf("enter adress : ");
		gets(adress);
		fputs(adress,p);
		fclose(p);
	}
	
	return 0;
}