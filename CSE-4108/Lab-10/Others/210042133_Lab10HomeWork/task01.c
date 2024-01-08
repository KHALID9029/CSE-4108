#include <stdio.h>

double calc_tax(int income)
{
    double tax;
    if(income <= 750) tax = income * .01;
    else  if(income <= 2250) tax = 7.5 + (income-750) * .01;
    else  if(income <= 3750) tax = 37.5 + (income-2250) * .03;
    else  if(income <= 5250) tax = 82.5 + (income-3750) * .04;
    else  if(income <= 7000) tax = 142.5 + (income-5250) * .05;
    else tax = 230.0 + (income-7000) * .06;

    return tax;
}

int main ()
{
    int n;
    printf("Enter Income($): ");
    scanf("%d", &n);


    double tax = calc_tax(n);
    printf("Tax due: $%lf", tax);

    return 0;
}
