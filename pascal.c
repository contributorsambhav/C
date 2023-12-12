#include <stdio.h>
int fac(int n)
{
    if (n == 1)
        return 1;
    return n * fac(n - 1);
}

int main()
{
    int a, c;
    printf("enter n:");
    scanf("%d", &a);

    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            int c = fac(i) / (fac(i - j) * fac(j));
            printf("%d", c);
        }
        printf("\n");
    }
}