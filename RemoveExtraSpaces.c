#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char str_1[100], str_2[100];
    int i, flag = 0, j = 0;
    gets (str_1);

    for (i = 0; str_1[i] != '\0'; i++)
    {
        if (str_1[i] != ' ')
        {
            str_2[j] = str_1[i];
            j++;
        }
        else 
        {
            if (str_1[i + 1] != ' ')
            {
                str_2[j] = ' ';
                j++;
            }
        }
    }
    str_2[j] = '\0';
    printf ("%s", str_2);
    return 0;
}