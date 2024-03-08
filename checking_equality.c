#include <stdio.h>

int main ()
{
    int x, y, z;
    scanf ("%d %d %d", &x, &y, &z);

    if (x > y)
    {
        if (x > z)
        {
            printf ("%d is highest.\n", x);
        }
        else if (z > x)
        {
            printf ("%d is highest.\n", z);
        }
        else 
        {
            printf ("%d and %d are highest.\n", x, z);
        }
    }
    else if (y > x)
    {
        if (y > z)
        {
            printf ("%d is highest.\n", y);
        }
        else if (z > y)
        {
            printf ("%d is highest.\n", z);
        }
        else 
        {
            printf ("%d and %d are highest.\n", y, z);
        }
    }
    else if (z > x)
    {
        printf ("%d is highest.\n", z);
    }
    else 
    {
        if (x > z)
        {
            printf ("%d and %d are highest.\n", x, y);
        }
        else
        {
            printf ("%d, %d and %d are same.\n", x, y, z);
        }
    }
    
    return 0;
}