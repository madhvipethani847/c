#include<stdio.h>

int main(){
	
	char a;
	
	printf("enter hear = ");
	scanf("%c",&a);
	
	if(a >= 'a' && a <= 'z'){	
		printf("\n\n your input value is alphabet");	
	}
	else if(a >= 0 ){
		printf("\n\n your input value is digit");
	}
	else{
		printf("\n\n your input value is special character ");
	}
	
	return 0;
}