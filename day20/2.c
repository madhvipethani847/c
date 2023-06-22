#include<stdio.h>
 
 int main(){
 	
 int n,largest,second_largest;
 
 printf("enter size : ");
 scanf("%d",&n);

 int a[n];
 int i;

 for(i=0;i<n;i++){
 	printf("enter value : ");
 	scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++){
 	if(i>i+1){
 		largest = i;
 		second_largest = i+1;
	 } 
	 else{
	 	largest = i+1;
	 	second_largest = i;
	 }
 }
 printf("second largest number is : %d",second_largest);
 
 return 0;
}