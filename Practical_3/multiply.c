// Write a program to perform the arithmetics operations

// +-*/%
#include <stdio.h>

void main(){

int a2 ;
printf("Enter first number to be multiplied: ");
scanf("%d", &a2);

int b2 ; 
printf("Enter second number to be multiplied: ");
scanf("%d", &b2);

int c2;
c2 = a2 * b2;
printf("The product is %d\n", c2);



float d2 ;
printf("Enter a floating number to be multiplied: ");
scanf("%f", &d2);

float e2 ;
printf("Enter a floating number to be multiplied: ");
scanf("%f", &e2);

printf("The sum is %f",d2*e2);

return 0;
}