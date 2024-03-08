#include <stdio.h>

int main ()
{
    int a, b, lcm;
    scanf ("%d %d", &a, &b);
    lcm = a;
    while (lcm <= a * b) {
        if (lcm % b == 0) break;
        lcm = lcm + a;
    }
    printf ("LCM: %d", lcm);
    return 0;
}