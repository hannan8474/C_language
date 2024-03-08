#include <stdio.h>

int main ()
{
    int first_num, second_num, i, sum = 0, total_sum = 0;
    printf ("Enter starting number: ");
    scanf ("%d", &first_num);

    printf ("Enter ending number: ");
    scanf ("%d", &second_num);

    printf ("Numbers divisible by 17 are: ");
    for (i = first_num + 1; i < second_num; i++)
    {
        total_sum = total_sum + i;
        if (i % 17 != 0)     sum = sum + i;
        else                 printf ("%d ", i);                   
    }
    printf ("\nTotal Sum: %d", total_sum);
    printf ("\nSum of numbers not divisible by 17: %d", sum);
    printf ("\nSum of numbers divisible by 17: %d", total_sum - sum);
}