// write a program to reverse an array
// write a program to rotate an array
#include <stdio.h>

int main()
{

  int len, temp, degree;
  printf("Enter length of array: ");
  scanf("%d", &len);

  int arr[len];
  for (int i = 0; i < len; i++)
  {
    printf("Element number %d of array is: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("Enter degree of rotation: ");
  scanf("%d",&degree);

for(int del=degree;del>0;del--){


  temp = arr[0];
  int index = len - 1;
  arr[0] = arr[index];

  for (int i = index; i > 0; i--)
  {
    arr[i] = arr[i - 1];
  }

  arr[1] = temp;
}


  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}