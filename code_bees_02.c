#include <stdio.h>
#include <string.h>

int main()
{
    int test_case, num = 0, i, key;
    char str[1000];
    scanf ("%d", &test_case);

    while (num < test_case)
    {
        scanf ("%s", str);
        scanf ("%d", &key);
        for (i = 0; str[i] != '\0'; i++)
        {
            key = key % 26;
            str[i] = str[i] + key;
            if (str[i] > 'z')
            {
                str[i] = str[i] - 26;
            }
        }
        printf ("Case #%d: %s\n", num + 1, str);
        num++;
    }
    return 0;
}