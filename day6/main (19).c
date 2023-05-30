#include<stdio.h>

int main(){
    
    float a = 3.14;
    int b;
    float c;
    printf("enter velue of radius = ");
    
    scanf("%d",&b);
    c = a * b * b;
    printf("area of circle = %.2f",c);
    
    return 0;
}
