#include<stdio.h>

 int main()
{
	int i,j;
	char k='A';
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
			
			printf("%c",k);
			k++;
		}
		printf("\n");
	}
}