#include <stdio.h>
int fac(int n){
    if(n == 1) return 1;
    return n*fac(n-1);
}

int main(){
    int a,r;
    printf("enter n:");
    scanf("%d",&a);
    printf("enter r:");
    scanf("%d",&r);
    int  c = fac(a)/(fac(a-r)*fac(r));   
    printf("%d",c);
    
}