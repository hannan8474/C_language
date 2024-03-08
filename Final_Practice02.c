#include <stdio.h>

int main ()
{
    char str[500];
    char str_1[600];
    int i, j = 0;
    scanf ("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        str_1[j] = str[i];
        j++;
        if ((i + 1) % 5 == 0)
        {
            str_1[j] = ' ';
            j++;
        }
    }
    printf ("%s", str_1);
    return 0;
}
