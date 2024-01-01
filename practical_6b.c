// a) Write a program to print the area as the parameter of the rectangle.

// b ) Write a program to print the area and parameter of circle.

#include <stdio.h>

int main(){
float r,c,a;
const float pi=3.14;

printf("Enter the radius: ");
scanf("%f",&r);

c=(float) 2*pi*r;
printf("The circumference of circle is %f\n",c);

a=(float) pi*r*r;
printf("The area of circle is %f",a);


    return 0 ;
}