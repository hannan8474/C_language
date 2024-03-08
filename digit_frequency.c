#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char instr[100];
    char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int i, j, count;
    scanf ("%s", instr);
    
    for (i = 0; i < 10; i++)
    {
        j = 0;
        count = 0;
        while (instr[j] != '\0')
        {
            if (instr[j] == digit[i])      count++;   
            j++;
        }
        printf ("%d ", count);
    }
    return 0;
}
