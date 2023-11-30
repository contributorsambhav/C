#include<stdio.h>

int main(){
    float c ; 
    printf("Celcius: ");
    scanf("%f",&c);

    float fuck = 1.8*c + 32;
    printf("Farenheit is %f",fuck);
    return 0;
}