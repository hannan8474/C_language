#include <stdio.h>

int main ()
{
    float a, b, c, d, max, min;

    printf ("Enter a: ");
    scanf ("%f", &a);
    printf ("Enter b: ");
    scanf ("%f", &b);
    printf ("Enter c: ");
    scanf ("%f", &c);
    printf ("Enter d: ");
    scanf ("%f", &d);

    max = a; 
    min = a;
    
    if (b > max)        max = b;
    else if (c > max)   max = c;
    else if (d > max)   max = d;
    if (b < min)        min = b;
    else if (c < min)   min = c;
    else if (d < min)   min = d;

    printf ("Max: %f Min: %f", max, min);
    return 0;
}