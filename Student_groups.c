#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int roll_no, group;

    srand(time(0));
    roll_no = rand () % 50 + 1;

    printf ("Roll No: %d\n", roll_no);

    if (roll_no % 4 == 1)      group = 1;
    else if (roll_no % 4 == 2) group = 2;
    else if (roll_no % 4 == 3) group = 3;
    else                       group = 4;
    printf ("Group: %d\n", group);
    return  0;
}