#include <stdio.h>

int main ()
{
    int marks, sum = 0, num = 1;
    float average;

    printf ("Enter marks of student %d: ", num);
    scanf ("%d", &marks);

    while (marks > 0)
    {
        sum = sum + marks;
        num++;
        printf ("Enter marks of student %d: ", num);
        scanf ("%d", &marks);
    }
    average = sum / (float)(num - 1);
    printf ("Average: %f", average);
    return 0;
}