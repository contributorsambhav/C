#include<stdio.h>

int main(){


    int myage ;
    scanf("%d",&myage);

    int votestate = (myage>=18)? 1 :0 ;

    printf("%d",votestate);

    return 0;


}