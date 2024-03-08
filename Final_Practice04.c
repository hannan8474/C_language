#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int arr[6][8], i, j, max;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            arr[i][j] = rand () % 100;
        }
    }

    for (i = 0; i < 6; i++)
    {
        max = 0;
        for (j = 0; j < 8; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
        printf ("Player %d has max %d\n", i, max);
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (arr[i][j] == 0)
                printf ("Player %d has match %d\n", i, j);
        }
    }
    return 0;
}