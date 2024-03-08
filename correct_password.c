#include <stdio.h>
#include <string.h>

int main ()
{
    char guess[10], password[10]="jdkhd154";
    int i, count = 0, length;
    length = strlen(password);

    scanf ("%s", guess);

        
    for (i = 0; i < length; i++)
    {
        if (guess[i] == password[i])    count++;
        else
        {
            printf ("Incorrect Password.");
            break;
        }    
    }        

    if (length == count)    printf ("Correct Password.");
    return 0;
}