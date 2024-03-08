#include <stdio.h>
#include <math.h>

int main ()
{
    float num1, num2, num3, b_2, mul, sqroot, root1, root2, sqroot_term;

    printf ("Enter values of a, b and c: ");
    scanf ("%f %f %f", &num1, &num2, &num3);
    fflush(stdin);

    b_2 = num2 * num2;
   
    mul = 4 * num1 * num3;
  
    sqroot_term = b_2 - mul;

    sqroot = sqrt(sqroot_term);

    root1 = (-num2 + sqroot) / (2 * num1);
    root2 = (-num2 - sqroot) / (2 * num1);

    printf ("Root 1: %f\nRoot 2: %f", root1, root2);
    return 0;
}