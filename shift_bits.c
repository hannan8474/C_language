#include <stdio.h>

int main ()
{
    int a, b;
    printf ("Enter a: ");  
    scanf ("%d", &a);
    b = a * 4;  // 00000010 -> 00001000 , 00001001 -> 00100100
    printf ("Left shift two bits without using left shift operator: %d\n", b);
    b = a << 2;
    printf ("Left shift two bits using left shift operator: %d\n", b);
    b = a / 4;
    printf ("Right shift two bits without using right shift operator: %d\n", b);
    b = a >> 2;
    printf ("Right shift two bits using right shift operator: %d\n", b);
    return 0;
}