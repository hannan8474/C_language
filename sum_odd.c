#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int number[5], i, sum = 0;
    srand(time(0));
    
    for (i = 0; i < 5; i++)
        number[i] = rand ();

    

    for (i = 0; i < 5; i++)
    {
        printf ("%d ", number[i]);
        if (number[i] % 2 != 0)     sum = sum + number[i];
    }
    printf ("\nSum of odd numbers is %d\n", sum);
    return 0;
}