#include <stdio.h>

int main()
{
    int a, b, c, d, rem;

    do
    {
        printf("Enter a and b: ");
        scanf("%d %d", &a, &b);
    } while (a > b);

    c = a;
    d = b;

    while (rem != 0)
    {
        rem = d % c;
        if (rem != 0)
        {
            d = c;
            c = rem;
        }
    }

    printf("HCF of %d and %d is %d.\n", a, b, c);
    return 0;
}