#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int arr[10], i, j, count;

    for (i = 0; i < 10; i++)
    {
        arr[i] = rand () % 100;
    }
    for (i = 0; i < 10; i++)
    {
        printf ("%d ", arr[i]);
    }
    printf ("\n");
    for (i = 0; i < 10; i++)
    {
        count = 0;
        for (j = 0; j < 10; j++)
        {
            if (i != j)
            {
                if (arr[i] > arr[j])
                {
                    count++;
                }
            }
            if (count >= 3)
            {
                printf ("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}