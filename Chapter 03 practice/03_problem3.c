/*
Calculate income tax paid by an employee to to the government based on the following criteria:
1. If the income is less than or equal to 2,50,000 then no tax is paid.
Take the income as input from the user
If income is between 2.5-5 lakhs, then 5% tax is paid.
If income is between 5-10 lakhs, then 20% tax is paid.
if income is above 10 lakhs, then 30% tax is paid.
*/

#include <stdio.h>

int main()
{
    float income, tax;
    printf("Enter your income: ");
    scanf("%f", &income);
    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = (income - 250000) * 0.05;
    }
    else if (income <= 1000000)
    {
        tax = (income - 500000) * 0.20 + 0.05 * 250000;
    }
    else
    {
        tax = (income - 1000000) * .30 + 0.20 * 500000 + .05 * 250000;
    }

    printf(" Income tax = %.2f\n", tax);

    return 0;
} 