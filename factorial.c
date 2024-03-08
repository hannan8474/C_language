#include <stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    int result = n * factorial(n-1);
    return result;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int result = factorial(n);

    printf("The factorial of %d is: %d.\n", n, result);

    return 0;
}