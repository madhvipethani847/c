#include<stdio.h>

int main(){
    
    int a;
    int b;
    int c = a*b;
    float d = c/2;
    
    printf("enter first velue = ");
    scanf("%d",&a);
    printf("enter second velue =");
    scanf("%d",&b);
    printf("%d",c);
    printf("area of triangle = %.2f",d);
    
    return 0;
}
