#include<stdio.h>
int main(){
 int a;
 printf("Enter no of rows: ");
 scanf("%d",&a);

 for(int i=0;i<=a;i++){
    for (int j = 0; j<=a-i;j++){
            printf(" ");
    }
    for (int j = 0; j<(2*i)-1;j++){
            printf("*");       
    }
    printf("\n");
    }
a+=1;
  for(int i=0;i<=a;i++){
    for(int j=0;j<i;j++){
        printf(" ");
    }
    for(int j=0;j<(2*(a-i)-1);j++){
        printf("*");
    }
    printf("\n");
    }
 }
 

 
    

