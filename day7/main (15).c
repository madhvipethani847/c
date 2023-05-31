#include<stdio.h>

int main(){
    
    int a = 60;
    int b = 40;
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("%d\n",a);
    printf("%d",b);
    
    return 0;
}