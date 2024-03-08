#include <stdio.h>
#include <string.h>

int main ()
{
    char str[500];
    int i;
    gets (str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[0] = str[i] - 32;
        }

        else if (str[i] <= 'z' && str[i] >= 'a' && str[i - 1] == '.')
        {
            str[i] = str[i] - 32;
        }
    }
    printf ("%s", str);
    return 0;
}
