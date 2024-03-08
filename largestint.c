#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1, m2, m3, result, max;
    printf("Enter the integers:\n");
    scanf("%d %d %d", &m1, &m2, &m3);
    fflush(stdin);
    
    if (m1 > m2)
    {
        if (m1 > m3)                           printf ("%d is greatest value.\n", m1);
        else 
        {
            if (m1 == m3 && m1 == m2)          printf ("All are equal\n");
        }
    }
    else if (m2 > m3)
    {
        if (m2 > m1)                           printf ("%d is greatest value.\n", m2);
        else 
        {
            if (m1 == m3 && m1 == m2)          printf ("All are equal\n");
        }
    }
    else
    {
        if (m1 == m3 && m1 == m2)              printf ("All are equal\n");
        else                                   printf ("%d is greatest value.\n", m3);
    }
    // Another approach

    result = (m1 + m2 + abs(m1 - m2)) / 2;
    max = (result + m3 + abs(result - m3)) / 2;

    if (max == m1 && max == m2 && max == m3)    printf ("All values are equal.\n");
    else                                        printf ("%d is greatest value.\n", max);
    return 0;
}