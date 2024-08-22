#include <stdio.h>
#include <stdlib.h>

int main() {
    // Step 1: Allocate an array with 10 integers
    int *arr = (int *)malloc(10 * sizeof(int));

    // Step 2: Initialize the array with values
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1; // Fill the array with values 1 to 10
    }

    // Step 3: Print the array before shrinking
    printf("Array before shrinking:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 4: Shrink the array to 5 integers using realloc
    arr = (int *)realloc(arr, 5 * sizeof(int));

    // Step 5: Print the array after shrinking
    printf("Array after shrinking:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 6: Free the allocated memory
    free(arr);

    return 0;
}
