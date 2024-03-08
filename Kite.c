#include <stdio.h>

int main()
{
    int n;
    printf ("Enter n: ");
    scanf ("%d", &n);
    // 1st for loop for upper portion of kite
    for (int i = 0; i < n; i++)
    {
        // spaces before the 1st triangle
        for (int j = 1; j < n - i; j++)
        {
            printf("  ");
        }
        // printing left portion of kite
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i || i == n - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        // printing right portion of kite
        for (int j = n; j > n - i; j--)
        {
            if (j == n - i + 1 || i == n - 1)
            {
                if (j != 0)
                {
                    printf("* ");
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    // 2nd for loop for printing of middle portion of kite
    for (int i = n; i > 1; i--)
    {
        // Left portion of the middle part
        for (int j = 0; j < n - i + 2; j++)
        {
            if (j == n - i + 1)
            {
                if (i != 2)
                {
                    printf("* ");
                } 
            }
            else
            {
                printf("  ");
            }
        }
        // Spaces after the line
        for (int j = 0; j < i - 3; j++)
        {
            printf("  ");
        }
        // Right portion of the middle part
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    // lower equilateral triangle
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf ("  ");
        }
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            if (j == 0 || j == (2 * i) || i == n - 3)
            {
                printf ("* ");
            }
            else
            {
                printf ("  ");
            }
        }
        printf ("\n");
    }
    return 0;
}