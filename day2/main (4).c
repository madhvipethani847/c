#include<stdio.h>

int main(){
    
    int x;
    int y;
    int z;
    int ans;
    
    printf("enter velue of x = \n");
    scanf("%d",&x);
    
    printf("enter velue of y = \n");
    scanf("%d",&y);
    
    printf("enter velue of z = \n");
    scanf("%d",&z);
    
    ans = (x*x*x) - (y*y*y) - (z*z*z) - (3*(x+y)*(y+z)*(z+x))  ;
    
    printf(" ans = %d",ans);
    
    return 0;
}
