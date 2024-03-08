#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int numbers, i;
    srand (time(0));
    
    numbers = rand() % 15 + 1;
    printf ("%d\n", numbers);
    for (i = 1; i <= numbers; i++)
        if (i % 2 == 0)     printf ("Square of %d is %d\n", i, i * i);
    return 0;
}