#include <stdio.h>

int main ()
{
    int arr[6][6], i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (arr[i][j] > arr[i][j + 1])
                break;
        }
        if (j < 6)
        {
            printf ("Unordered array\n");
        }
        else
        {
            printf ("ordered array\n");
        }
    }
    return 0;
}