#include<stdio.h>

void sum(int a,int b){
	printf("sum : %d",a+b);
}
void min(int a,int b){
	printf("min : %d",a-b);
}
void multi(int a,int b){
	printf("multi : %d",a*b);
}
void divi(int a,int b){
	printf("divi : %d",a/b);
}


int main(){
	
	int a,b;
	char x;
	while(1){
	
	printf("enter first velue : ");
	scanf("%d",&a);
	
	printf("enter second velue : ");
	scanf("%d",&b);
	
	printf("\nenter + for sum.\n");
	printf("enter - for min.\n");
	printf("enter * for multi.\n");
	printf("enter / for divi.\n");
	printf("put your selection : ");
	scanf(" %c",&x);
	
	switch(x){
		case '+' :
			sum(a,b);
			printf("\n\n");
			break;
			
		case '-' :
			min(a,b);
			printf("\n\n");
			break;
			
		case '*' :
			multi(a,b);
			printf("\n\n");
			break;
		
		case '/' :
			divi(a,b);
			printf("\n\n");
			break;
	}
}
	return 0;
}

