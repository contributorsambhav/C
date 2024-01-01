// Write a program to perform the arithmetics operations

// +-*/%
#include <stdio.h>

void main(){

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