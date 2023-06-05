#include<stdio.h>

int main(){
    
    int a,b,c;
    
    printf("enter A = ");
    scanf("%d",&a);
    
    printf("enter B = ");
    scanf("%d",&b);
    
    printf("enter C = ");
    scanf("%d",&c);
    
    if(a>b){
        
        if(b>c){
            
            printf("c is min.");
            
        }
        else{
            
            printf("b is min.");
            
        }
    }
    else{
        
        if(a>c){
            
            printf("c is min.");
            
        }
        else{
            
            printf("a is min.");
            
        }
    }
    
    return 0;
    
}