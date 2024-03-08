#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
    int i, j, arr1[SIZE], arr2[SIZE], temp;
    srand(time(0));
    for (i = 0; i < SIZE; i++)
    {
        arr1[i] = rand() % 90 + 10;
    }  
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr1[i]);
    }  
    printf("\n");
    for (i = 0; i < SIZE; i++)
    {
        arr2[i] = arr1[i];
    }
    for (j = 0; j < SIZE; j++)
    {
        for (i = 0; i < SIZE; i++)
        {
            if (arr1[i] > arr1[i + 1])
            {
                temp = arr1[i];
                arr1[i] = arr1[i + 1];
                arr1[i + 1] = temp;
            }
            printf("%d ", arr1[i]);
        }
        printf("\n");
    }
    for (j = 0; j < SIZE; j++)
    {
        for (i = 0; i < SIZE; i++)
        {
            if (arr2[j] == arr1[i])
                printf("%d is at index %d\n", arr2[j], i);
        }
    }
    return 0;
}