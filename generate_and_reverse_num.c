#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int temp, rem;
    srand(time(0));
    int number = rand();
    printf("Original Number: %d\n", number);
    printf ("Reverse Number: ");
    while (number != 0) {
        rem = number % 10;
        number = number / 10;
        printf ("%d", rem);
    }
    return 0;
}