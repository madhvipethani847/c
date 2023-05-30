#include<stdio.h>

int main(){
    
    float p;
    float r;
    float t;
    float ans;
    
    printf("enter velue of p = \n");
    scanf("%f",&p);
    
    printf("enter velue of r = \n");
    scanf("%f",&r);
    
    printf("enter velue of t = \n");
    scanf("%f",&t);
    
    ans = (p*r*t)/100;
    
    printf("ans = %f",ans);
    
    return 0;
}
