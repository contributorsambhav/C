// write a program to print sum of array elements
//to print the second largest and second smallest no of array
#include <stdio.h>
int main(){
int x,sum=0;
int b ;
printf("Enter no of elements: ");
scanf("%d",&b);
int arr [b];
for (int i=0;i<b;i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&x);
    arr[i]=x;
}

for(int i=0;i<b;i++){
    sum += arr[i];
}

printf("%d",sum);
}