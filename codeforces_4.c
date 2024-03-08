#include <stdio.h>

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
int lcm(int x, int y)
{
    return (x * y) / gcd(x, y);
}

int main()
{
    int tCases, n = 0, found;
    int l, r, x, y;

    scanf("%d", &tCases);

    while (n < tCases)
    {
        found = 0;

        scanf("%d", &l);
        scanf("%d", &r);

        for (x = l; x < r; x++)
        {
            for (y = x + 1; y <= r; y++)
            {
                if ((lcm(x, y) <= r && lcm(x, y) >= l))
                {
                    printf("%d %d\n", x, y);
                    found = 1;
                    break;
                }
            }
            if (found)
            {
                break;
            }
        }
        if (!found)
            printf("-1 -1\n");
        n++;
    }
    return 0;
}