#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[10], i, j, count, arr_1[10], temp;

    for (i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
        arr_1[i] = rand() % 100;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf ("\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr_1[i]);
    }
    printf ("\n");
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (arr_1[j] > arr[j + 1])
            {
                temp = arr_1[j];
                arr_1[j] = arr_1[j + 1];
                arr_1[j + 1] = temp;
            }
        }
        for (j = 0; j < 9; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf ("\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr_1[i]);
    }
    printf ("\n");
    return 0;
}
