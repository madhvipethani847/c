#include<stdio.h>

int main(){
     
     int a;
     int b;
     
     printf("enter first no. = ");
     scanf("%d",&a);
     
     printf("enter second no. = ");
     scanf("%d",&b);
     
     printf("minimum no. is = ");
     
     if(a>b){
         
         printf("%d",b);
         
     }
     else{
         
         printf("%d",a);
         
     }
     
    return 0;
}