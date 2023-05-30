#include<stdio.h>

int main(){
    
    int x;
    int y;
    int ans;
    
    printf("enter velue of x = \n");
    scanf("%d",&x);
    
    printf("enter velue of y = \n");
    scanf("%d",&y);
    
    ans = (x*x*x) + ((3*x*y) * (x+y)) + (y*y*y);
    
    printf(" ans = %d",ans);
    
    return 0;
}
