#include<stdio.h>
#include<string.h>

int main(){

	char email[]="madhvipethasni@gmail.com";
	char x[20];
	char password[]="madhvi";
	char y[20];

	printf("enter your email");
	scanf("%s",&x);

	printf("enter your password");
	scanf("%s",&y);

	int a=strcmp(email,x);
	int b=strcmp(password,y);

	if(a==0){
		printf("valid your email...!\n");
	}
	else{
		printf("invalid your email...!\n");
	}

	if(b==0){
		printf("valid your password...!\n");

	}
	else{
		printf("invalid your password...!\n");
	}
	return 0;
}
