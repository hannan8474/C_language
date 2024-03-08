#include <stdio.h>

int main ()
{
    int amount, hundred, fifty, twenty, ten, five, two, one;
    printf ("Enter amount: ");
    scanf ("%d", &amount);

    hundred = amount / 100;
    amount = amount % 100;

    fifty = amount / 50;
    amount = amount % 50;

    twenty = amount / 20;
    amount = amount % 20;

    ten = amount / 10;
    amount = amount % 10;

    five = amount / 5;
    amount = amount % 5;

    two = amount / 2;
    amount = amount % 2;

    printf ("%d hundreds.\n", hundred);
    printf ("%d fifties.\n", fifty);
    printf ("%d twenties.\n", twenty);
    printf ("%d tens.\n", ten);
    printf ("%d fives.\n", five);
    printf ("%d twos.\n", two);
    printf ("%d ones.\n", amount);
    return 0;
}