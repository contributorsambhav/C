



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


float d ;
printf("Enter a floating number to be added: ");
scanf("%f", &d);

float e ;
printf("Enter a floating number to be added");
scanf("%f", &e);

printf("The sum is %f\n",d+e);



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

printf("The difference is %f\n",d1-e1);


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

printf("The sum is %f\n",d2*e2);


int a3 ;
printf("Enter Dividend for modulus: ");
scanf("%d", &a3);

int b3 ; 
printf("Enter divisor for modulus: ");
scanf("%d", &b3);

printf("The remainder is %d",a3%b3);


int a4 ;
printf("Enter Dividend: ");
scanf("%d", &a4);

int b4 ; 
printf("Enter divisor: ");
scanf("%d", &b4);

int c4;
c4 = a4 / b4;
printf("The Quotient is %d\nThe remainder is %d",c4,a4%b4);


return 0;




}