#include <stdio.h>

int main()
{
    int a;
    int *ptr = &a;

    printf("Enter a: ");
    scanf("%d", ptr); // Read input and store it in 'a' via the pointer

    printf("Value of a: %d\n", *ptr); // Print the value of 'a' (dereferencing the pointer)
    printf("Address of a: %p\n", (void*)ptr); // Print the address stored in the pointer

    return 0;
}
