#include <stdio.h>
#include <math.h>

int power(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int result = pow(a, n - 1) * a;
    return result;
}
int main()
{
    float a;
    int n;
    do
    {
        printf("Enter Real Number:\n");
        scanf("%f", &a);
    } while (a == 0);

    do
    {
        printf("Enter a Non-negative Integer:\n");
        scanf("%d", &n);
    } while (n < 0);

    int result = power(a, n);

    printf("%f raise to the power %d is:%d.", a, n, result);

    return 0;
}