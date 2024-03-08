#include <stdio.h> 

int main ()
{
    int number;

    printf ("Enter the number: ");
    scanf ("%d", &number);

    if (number % 2 == 0)
    {
        if (number == 0)         printf ("Even.");
        else if (number > 0)     printf ("Positive Even.");
        else                     printf ("Negative Even.");
    }
    else
    {
        if (number > 0)          printf ("Positive Odd.");
        else                     printf ("Negative Odd.");
    }
    return 0;
}