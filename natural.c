// Write a program to print numbers fro  o to n

// b) write a program to print a multiplication table

#include<stdio.h>

int main(){
    int n; 
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i = 0;i<=n;i++ ){
        printf("%d\n",i);
    }

  return 0;
}