#include<stdio.h>


int main(){
      
      float fahrenheit;
      float celsius;
      
      printf("enter value of celsius = ");
      scanf("%f",&celsius);
      
      fahrenheit = (celsius * 9/5) + 32;
      
      printf(" fahrenheit = %f",fahrenheit);
      
    return 0;
}
