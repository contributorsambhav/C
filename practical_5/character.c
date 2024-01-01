//a) Write a program to print the character from ascii value

#include <stdio.h>

int main(){

    int c;
    printf("Enter character");
    scanf("%d",&c);

    printf("The associated character with ascii value %d is %c",c,c);


    return 0;
}