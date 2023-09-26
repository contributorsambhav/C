// a) Write a program to print the area as the parameter of the rectangle.

// b ) Write a program to print the area and parameter of circle.

#include <stdio.h>

int main(){
int r,c,a;
float pi=3.14;

printf("Enter the radius: ");
scanf("%d",&r);

c=2*pi*r;
printf("The circumference of circle is %d\n",c);

a=pi*r*r;
printf("The area of circle is %d",a);


    return 0 ;
}