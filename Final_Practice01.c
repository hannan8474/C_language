#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50

int main()
{
    int arr[SIZE], i, difference;
    srand(time(0));
    for (i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf ("\n");
    for (i = 1; i < SIZE; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            difference = (arr[i - 1] - arr[i]);
            arr[i] = arr[i] + difference + 1;
        }
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}