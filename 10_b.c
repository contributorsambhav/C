// a) Write a program to print the pattern 1
// b)

#include <stdio.h>

int main()
{

    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}