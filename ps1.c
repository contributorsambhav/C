#include <stdio.h>

int main(){

    int l;
    int b;
    
    printf("Enter desired length:  ");
    scanf("%f", &b);

    int area = (l*b);
    printf("The area of reactangle is %d",area);

    int bye;
    printf("\nPress any key to close the terminal");
    scanf("%d",&bye);
   
}