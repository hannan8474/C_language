#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  int n;
  scanf("%d", &n);
  // Complete the code to print the pattern.
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      printf ("%d", (n - j));
    }
    for (int j = 0; j < (2 * (n - i)) - 1; j++)
    {
      printf ("%d", n - i);
    }
    for (int j = i; j > 0; j--)
    {
      printf ("%d", (n - j + 1));
    }
    printf ("\n");
  }
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      printf ("%d", n - j);
    }
    for (int j = 0; j < (2 * i) + 1; j++)
    {
      printf ("%d", i + 2);
    }
    for (int j = n - i - 1; j > 0 ; j--)
    {
      printf ("%d", n - j + 1);
    }
    printf ("\n");
  }
  return 0;
}
