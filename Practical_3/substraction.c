// Write a program to perform the arithmetics operations

// +-*/%
#include <stdio.h>

void main(){

int a1 ;
printf("Enter first number : ");
scanf("%d", &a1);

int b1 ; 
printf("Enter second number : ");
scanf("%d", &b1);

int c1;
c1 = a1 - b1;
printf("The difference is %d\n", c1);



float d1 ;
printf("Enter a floating number: ");
scanf("%f", &d1);

float e1 ;
printf("Enter a floating number");
scanf("%f", &e1);

printf("The difference is %f",d1-e1);

return 0;
}