#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int arr[5], i;
    srand (time (0));

    for (i = 0; i < 5; i++)
        arr[i] = rand () % 10 + 1;

    for (i = 0; i < 5; i++)     printf ("%d\n", arr[i]);
    
    for (i = 0; i < 5; i++)
    {
        if (arr[i] < 5)     printf ("A[%d]: %d\n", i, arr[i]);
    }
    return 0;
}