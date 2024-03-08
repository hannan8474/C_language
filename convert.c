#include<stdio.h>
int main()
{
    int days;
    printf("Enter the number of days:\n");
    scanf("%d",&days);
    int result=days/365;
    int weeks=(days%365)/7;
    int day=days-((result*365)+(weeks*7));
    printf("%d = %d years %d weeks %d days", days, result, weeks, day);

    return 0;
}