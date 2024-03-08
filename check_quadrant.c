#include <stdio.h>

int main ()
{
    int point1, point2;

    printf ("Enter 1st co-ordinate: ");
    scanf ("%d", &point1);

    printf ("Enter 2nd co-ordinate: ");
    scanf ("%d", &point2);

    if (point1 > 0 && point2 > 0)       printf ("Quadrant-I(+,+)");
    else if (point1 < 0 && point2 > 0)  printf ("Quadrant-II(-,+)");
    else if (point1 < 0 && point2 < 0)  printf ("Quadrant-III(-,-)");
    else                                printf ("Quadrant-IV(+,-)");
    return 0;
}