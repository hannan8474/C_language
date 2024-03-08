#include <stdio.h>
int main()
{
    int n, prime = 0;
    printf("Enter your Number:\n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if ((prime == 0 || n == 2) && n != 1)
    {
        printf("The number %d you enter is Prime!!\n", n);
    }
    else
    {
        printf("Your entered number %d is not prime!!\n", n);
    }
    return 0;
}