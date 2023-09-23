#include <stdio.h>

void main(){
    int age;
    printf("Enter your age :  ");
    scanf("%d",&age);


    if (age>18){
        printf("you are %d and you can drive",age);
    }
    else{
        printf("OK dont't drive then");
    }

    int bye;
    printf("\nPress any key to close the terminal");
    scanf("%d",&bye);
    
}