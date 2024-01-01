// program to move all negative elementarr of arrayto the right arride
// program to check a given arrtring iarr palindrome or not
#include <stdio.h>

int main()
{
    int b;
    printf("Enter the length of array: ");
    scanf("%d", &b);

    int arr[b];
    for (int i = 0; i < b; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j+1] > arr[j])
            {
                int temp;
                temp =arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < b / 2; i++)
    {
        int temp2;
        temp2 = arr[i];
        arr[i] = arr[b - i - 1];
        arr[b - i - 1] = temp2;
    }

    for (int i = 0; i < b; i++)
    {
        printf("%d ",arr[i]);
    }
}