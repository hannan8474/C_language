#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int test_cases, n = 0, start_digit, end_digit, j, count, num, rack, i, flag = 0, k;
    int *arr;
    scanf ("%d", &test_cases);
    arr = (int *)malloc((test_cases * 2) * sizeof(int));
    for (j = 0; j < test_cases * 2; j++)
    {
        scanf ("%d", &arr[j]);
    }
    for (j = 0; j < test_cases * 2; j += 2)
    {
        rack = 0;
        k = arr[j];
        while (k != 1)
        {
            k = k / 2;
            rack++;
        }
        for (i = arr[j]; i <= arr[j + 1]; i++)
        {
            num = i;
            count = 0;
            while (num != 1)
            {
                num = num / 2;
                count++;
            }
            if (rack == count)
            {
                printf ("%d ", i);
            }
            else 
            {
                rack++;
                printf ("\n%d ", i);
            }
        }
        printf ("\n");
    }
    return 0;
}