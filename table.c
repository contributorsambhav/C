

  

    // Write a program to print numbers fro  o to n

// b) write a program to print a multiplication table

#include<stdio.h>

int main(){
    int n; 
    printf("Enter the number: ");
    scanf("%d",&n);

    for (int j = 1; j<=10 ; j++){
        printf("%d X %d = %d\n",n,j,j*n);
    }

  return 0;
}