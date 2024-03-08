#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[100000];
    int test_case, num = 0, count, i, j;
    int *arr;
    scanf("%d", &test_case);

    arr = (int*)malloc(test_case * sizeof(int));

    while (num < test_case)
    {
        scanf("%s", str);
        count = 0;
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == '(')
            {
                if (str[i + 1] == '\0') 
                {
                    count++;
                    break;        
                }    

                for (j = i + 1; str[j] != '\0'; j++)
                {
                    if (str[j] == ')')
                    {
                        str[j] = '1';
                        str[i] = '1';
                        break;
                    }
                }
                if (str[j] == '\0')
                {
                    count++;            
                }
            }
            else if (str[i] == ')')
            {
                if (i - 1 == 0)
                {
                    count++;
                    break;
                }
                for (j = i - 1; j >= 0; j--)
                {
                    if (str[j] == '(')
                    {
                        str[j] = '1';
                        str[i] = '1';
                        break;
                    }
                }
                if (j < 0)
                {
                    count++;
                }
            }
        }
        arr[num] = count;
        num++;
    }
    for (i = 0; i < test_case; i++)
    {
        printf ("%d\n", arr[i]);
    }
    free (arr);
    return 0;
}