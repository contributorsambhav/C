//a) Write a program to print the ascii value of the given character.
//b) character from ascii value

#include <stdio.h>

int main(){

    char c;
    printf("Enter character");
    scanf("%c",&c);

    printf("The associated ascii value of %c is %d",c,c);


    return 0;
}