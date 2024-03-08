#include <stdio.h>
#include <string.h>

int main ()
{
    char str[101];
    int n, i, j, length;
    scanf ("%d", &n);

    for (i = 0; i < n; i++) {
        scanf ("%s", str);
        length = strlen(str);
        if (length > 10) 
            printf ("%c%d%c\n", str[0], length - 2, str[length - 1]);
        else 
            printf ("%s\n", str);
    }
    return 0;
}