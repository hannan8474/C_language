#include <stdio.h>

int main()
{
    int number[5], i, count, sum = 0;
    float average;

    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (number[i] > 0)
        {
            count++;
            sum = sum + number[i];
        }    
    }

    printf ("Average of positive values is: %f", sum / (float)count);
    return 0;
}