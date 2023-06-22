#include<stdio.h>
 
 int main(){
 	
 int n;
 
 printf("enter size : ");
 scanf("%d",&n);

 int a[n];
 int i;

 for(i=0;i<n;i++){
 	printf("enter value : ");
 	scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++){
 
 if(a[i]<0){
 	
 	printf("value ");
 	printf("%d",i+1);
 	printf(" is nagative");
 	
 }
 else{
 }
}

return 0;
}