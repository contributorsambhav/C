// to print upto nth fibonacciseries using

#include <stdio.h>
int fib (n){
    if(n==1|| n==2){
        return 1;
    }else{
        return fib(n-1)+fib(n-2);
    }

}
int main(){
    int n;
    printf("Enter the term: ");
    scanf("%d",&n);

    int c = fib(n);
    printf("The nth term is %d",c);
}