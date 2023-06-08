#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("enter value here = ");
	scanf("%d",&a);
	 
	 b = a%2;
	 
	 switch(b){
	 	
	 	case 1 :
		printf("your input value is even!");
	      break;
	      
	    case 0 :
	     printf("your input value is odd");
	 	  break;
	 	  
	 	  default :
	 	  	printf("invalid! input");
	 	  	break;
	 	  
	 	
	 }
	 
	return 0;
}