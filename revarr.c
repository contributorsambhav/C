// write a program to reverse an array
// write a program to rotate an array
#include <stdio.h>

int main() {

  int len, temp;
  printf("Enter length of array: ");
  scanf("%d", &len);

  int arr[len];
  for (int i = 0; i < len; i++) {
    printf("Element number %d of array is: ", i + 1);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < len / 2; i++) {
    temp = arr[i];
    arr[i] = arr[len - i - 1];
    arr[len - i - 1] = temp;
  }

  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}