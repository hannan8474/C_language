#include <stdio.h>

int gcd(int a, int b)
{
    if (a < b)     return gcd(b, a);
    else if (a % b == 0)    return b;
    else    return gcd(b, a % b);
        
}
int main()
{
    int a, b;

    
        printf("Enter a:\n");
        scanf("%d", &a);
        printf("Enter b:\n");
        scanf("%d", &b);
    

    int result = gcd(a, b);

    printf("Greatest Common Divisor of %d and %d is: %d", a, b, result);
    return 0;
}
