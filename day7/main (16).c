#include<stdio.h>

int main(){
    
    int a = 60;
    int b = 40;
    int c;
    
    c = a;
    a = b;
    b = c;
    
    printf("%d\n",a);
    printf("%d",b);
    
    return 0;
}