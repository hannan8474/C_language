#include <stdio.h>

int main ()
{
    int arr[7], i;
    arr[0] = 2;
    for (i = 1; i < 7; i++)
        arr[i] = arr[i - 1] * 3;

    for (i = 0; i < 7; i++)
        printf ("%d ", arr[i]);
    return 0;
}