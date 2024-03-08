#include <stdio.h>

int main ()
{
    float w1, n1, w2, n2, wm1, wm2, wm;
    printf ("Enter weight and number of first item\n");
    printf ("Enter weight: ");
    scanf ("%f", &w1);
    fflush(stdin);
    printf ("Enter number: ");
    scanf ("%f", &n1);

    printf ("Enter weight and number of second item\n");
    printf ("Enter weight: ");
    scanf ("%f", &w2);
    fflush(stdin);
    printf ("Enter number: ");
    scanf ("%f", &n2);

    wm1 = w1 * n1;
    wm2 = w2 * n2;

    wm = (wm1 + wm2) / (n1 + n2);

    printf ("Average Value: %f", wm);
    return 0;
}