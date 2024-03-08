#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main ()
{
    int arr[6], i, min, pos;
    srand (time (0));

    for (i = 0; i < 6; i++)
        arr[i] = rand () % 10 + 1;

    for (i = 0; i < 6; i++)
        printf ("%d ", arr[i]);

    printf ("\n");
    min = arr[0];
    for (i = 1; i < 6; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }       
    }

    printf ("Minimum number is %d at position %d", min, pos);
    return 0;
}