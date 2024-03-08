#include <stdio.h>

int main ()
{
    int ID, working_hrs;
    float  amount_p_hr, salary_pmonth;
    printf ("Employee ID: ");
    scanf ("%d", &ID);

    printf ("Working Hours: ");
    scanf ("%d", &working_hrs);

    printf ("Amount per hour: ");
    scanf ("%f", &amount_p_hr);

    salary_pmonth = working_hrs * 30 * amount_p_hr;

    printf ("Employee ID: %d\nSalary: %0.2f\n", ID, salary_pmonth);
    return 0;
}