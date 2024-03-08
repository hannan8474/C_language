#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int a, b, c, perimeter;
    srand (time(0));
    a = rand() % 100 + 1;
    b = rand() % 100 + 1;
    c = rand() % 100 + 1;

    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
    {
        perimeter = a + b + c;
        printf ("Perimeter: %d", perimeter);
    }
    else       printf ("Not possible to create a triangle.");
    return 0;
}