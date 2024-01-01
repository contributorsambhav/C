//Write a program to print a number is even or odd

#include<stdio.h>

int main(){

int a;


printf("Enter the number: ");
scanf("%d",&a);

if (a%2==0)
{
    printf("The entered number is even");
}else{
    printf("The entered number is odd");
}

}