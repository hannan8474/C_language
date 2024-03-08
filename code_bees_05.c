#include <stdio.h>

void horizontalFlip(int array[], int columns)
{
    int i, temp;
    for (i = 0; i < columns / 2; i++)
    {
        temp = array[i];
        array[i] = array[columns - i - 1];
        array[columns - i - 1] = temp;
    }
}

void inverseArray(int array[], int columns)
{
    int i;

    for (i = 0; i < columns; i++)
    {
        array[i] = !array[i];
    }
}
int main()
{
    int test_case, rows, columns, i, j, n = 0;

    scanf("%d", &test_case);
    n = 0;
    while (n < test_case)
    {
        scanf("%d", &rows);
        scanf("%d", &columns);

        int array[rows][columns];

        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                scanf("%d", &array[i][j]);
            }
        }

        for (i = 0; i < rows; i++)
        {
            horizontalFlip(array[i], columns);
        }
        for (i = 0; i < rows; i++)
        {
            inverseArray(array[i], columns);
        }
        printf ("Test#%d\n", n + 1);
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                printf ("%d ", array[i][j]);
            }
            printf ("\n");
        }
        n++;
    }
    return 0;
}