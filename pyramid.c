#include <stdio.h>

int main()
{

    int n;
    printf("Enter no of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < ((2 * i) + 1) / 2; k++)
        {

            printf("%d", i - k);
        }
        for (int k = ((2 * i) - 1) / 2; k > 0; k--)
        {

            printf("%d", i - k + 1);
        }

        printf("\n");
    }
}