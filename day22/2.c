#include<stdio.h>
#include<string.h>

int main(){

	char val[10],i;
	printf("Enter value :");
	scanf("%s",&val);

	for(i=0;i<=strlen(val);i++){
		if(val[i]>='A'&& val[i]<='Z')
		    val[i]+=32;

		else if (val[i]>='a'&& val[i]<='z')
		  val[i]-=32;
	}

	printf("%s",val);

	return 0;
}
