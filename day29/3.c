#include<stdio.h>

int main(){
	
	FILE *p;
	
	char adress[20];
	
	p = fopen("adress.txt","a");
	
	if(p==NULL){
		
		printf("Error");
	}
	else{
		printf("Enter adress :");
		gets(adress);
		
		fputs(adress,p);
		fputs("\n",p);
		
		fclose(p);
	}
	
	return 0;
	
}