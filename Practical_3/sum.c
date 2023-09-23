// Write a program to perform the arithmetics operations

// +-*/%
#include <stdio.h>

void main(){

int a ;
printf("Enter first number to be added: ");
scanf("%d", &a);

int b ; 
printf("Enter second number to be added: ");
scanf("%d", &b);

int c;
c = a + b;
printf("the sum is %d\n", c);

return 0;

float d ;
printf("Enter a floating number to be added: ");
scanf("%f", &d);

float e ;
printf("Enter a floating number to be added");
scanf("%f", &e);

printf("The sum is %f",d+e);
}