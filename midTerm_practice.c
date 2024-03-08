#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // unsigned char x, first_info;
    // x = x | 2;
    // x = x * 64;

    // x = x | 31;
    // printf ("%d\n", x);

    // first_info = x & 63;
    // x = x / 64;
    // printf ("1st value: %d\n2nd value: %d", x, first_info);

    int s, r, n, p, c = 4, b = 5, i, raise, num, max = 0, s_max = 0, p_num, p_max = 0;
    srand (time (0));
    printf("Enter s, r and n: ");
    scanf("%d %d %d", &s, &r, &n);

    p = (s + pow(2 + r, n));
    p = p / (1 - pow(r, n));
    printf("Answer: %d\n", p);

    printf("Expression: \"b x c\", where b = %d & c = %d. Answer was %d.\n", b, c, b * c);
    printf("\'\\t\' is a special character.\n");

    i = 1;
    while (i <= 10)
    {                     // Write missing statements to print output as in the box
        printf("%d ", i); // without modifying the given code
        if (i % 2 == 0 && i != 10)
            printf(": ");
        i++;
    }
    printf ("\n");
    raise = pow (s, r);
    if (raise == n)     printf ("1\n");

    i = 0;
    while (i < 10) {
        num = rand ();
        printf ("%d ", num);
        if (num > max) 
        {
            p_max = max;
            max = num;
        }     
        if (num != max) {
            p_num = num;
            if (p_num > p_max)      p_max = p_num;
        }
        i++;
    }
    printf ("\n");
    printf ("Maximum: %d\nSecond Maximum is: %d", max, p_max);
    return 0;
}