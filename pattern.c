#include <stdio.h> 

int main ()
{
    int n, row = 1, i;

    printf ("Enter number of lines: ");
    scanf ("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf ("%3d %3d %3d", row, row * row, row * row * row);
        row++;
        printf ("\n");
    }
    return 0;
}