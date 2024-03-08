#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cities, miles_per_gallon, i, j, n, total;
    int *distances;
    int *gallons;

    scanf ("%d", &cities);

    distances = (int *) malloc (cities * sizeof(int));
    gallons = (int *) malloc (cities * sizeof(int));

    for (i = 0; i < cities; i++)
    {
        scanf ("%d", &distances[i]);
    }
    for (i = 0; i < cities; i++)
    {
        scanf ("%d", &gallons[i]);
    }

    scanf ("%d", &miles_per_gallon);

    i = 0;
    while (i < cities)
    {
        n = i;
        j = 0;
        total = 0;
        while (j < cities)
        {
            total = total + ((miles_per_gallon * gallons[n % cities]) - distances[n % cities]); 
            if (total < 0) 
            {
                break;
            }
            n++;
            j++;
        }
        if (total >= 0)
        {
            printf ("%d\n", i);
            break;
        }
        i++;
    }
    free (gallons);
    free (distances);
    return 0;
}