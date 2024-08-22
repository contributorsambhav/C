#include <stdio.h>

int main() {
    int a;
    int *ptr = &a;

    printf("Enter a: ");
    if (scanf("%d", ptr) != 1) {
        printf("Input error\n");
        return -1;
    }

    printf("Value of a: %d\n", *ptr);
    printf("Address of a: %p\n", (void*)ptr);

    return 0;
}
