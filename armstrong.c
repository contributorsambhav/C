#include <stdio.h>

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        
        int power = 1;
        for (int i = 0; i < n; i++) {
            power *= remainder;
        }

        result += power;
        originalNumber /= 10;
    }

    // Check if the number is Armstrong
    if (result == number)
        printf("%d is an Armstrong number.\n",number);
    else
        printf("%d is not an Armstrong number.\n",number);

    return 0;
}
