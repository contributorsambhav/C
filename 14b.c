// write a program to print sum of array elements
//to print the second largest and second smallest no of array
#include <stdio.h>
int main(){
int x,b;

printf("Enter no of elements: ");
scanf("%d",&b);
int arr [b];
for (int i=0;i<b;i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&x);
    arr[i]=x;
}
int smax;
int max = arr[0];

for (int j=1;j<b;j++){
 if (arr[j]>max){
    smax = max;
    max = arr[j];
 }
}


printf("second largest no is %d\n",smax);

}