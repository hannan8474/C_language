#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int number1, number2, i, sum = 0, count;

    srand (time (0));
    number1 = rand () % 100;
    number2 = rand () % 100;
    printf ("Number 1: %d\nNumber 2: %d\n", number1, number2);
    if (number1 > number2)
    {
        for (i = number2 + 1; i < number1; i++)
        {
            if (i % 2 != 0)     
            {
                sum = sum + i;
                count++;
                printf ("%d\n", i);
            }
        }
    }
        
    else
    {
        for (i = number1 + 1; i < number2; i++)
        {
            if (i % 2 != 0)     
            {
                sum = sum + i;
                count++;
                printf ("%d\n", i);
            }
        }
    }   

    printf ("Sum of Odd numbers is: %d", sum);
    return 0;
}