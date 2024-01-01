// Write a program to swap two numbers using three varables
// b) Without third variable

#include<stdio.h>
int main(){

int a;
printf("Enter first number: ");
scanf("%d",&a);

int b;
printf("Enter Second number: ");
scanf("%d",&b);

int c;

c=a;
a=b;
b=c;

printf("Numbers Swapped Now \nThe first no is %d and second is %d\n",a,b);






//Without using third variables

int first ;
printf("Enter first: ");
scanf("%d",&first);

int second ;
printf("Enter second: ");
scanf("%d",&second);

first = first+second;
second = first-second;
first = first-second;

printf("First no. is %d\n",first);
printf("Second no. is %d",second);


;


    return 0;

}

