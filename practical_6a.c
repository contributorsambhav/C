// a) Write a program to print the area as the parameter of the rectangle.

// b ) Write a program to print the area and parameter of circle.

#include <stdio.h>

int main(){
int l,b,a;

printf("Enter the length: ");
scanf("%d",&l);

printf("Enter the breadth: ");
scanf("%d",&b);

a=l*b;
printf("The area of rectangle is %d\n",a);

printf("The perimeter of rectangle is %d",2*(l+b));

    return 0 ;

}