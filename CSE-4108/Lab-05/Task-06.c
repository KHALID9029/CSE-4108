#include<stdio.h>
int main()
{
    printf("Enter the amount off taxable amount:");
    int income;
    scanf("%d",&income);

    float tax;
    if (income<=750)
        tax= (income*(1.0f/100.0f));

    else if (income>750 && income<=2250)
        tax= (7.50 + ((income-750)*(2.0f/100.0f)));

     else if (income>2250 && income<=3750)
        tax= (37.50 + ((income-2250)*(3.0f/100.0f)));

       else if (income>3750 && income<=5250)
        tax= (82.50 + ((income-3750)*(4.0f/100.0f)));

        else if (income>5250 && income<=7000)
        tax= (142.50 + ((income-5250)*(5.0f/100.0f)));

         else if (income>7000)
        tax= (230 + ((income-7000)*(6.0f/100.0f)));


    printf("Amount of tax:$%.2f",tax);




    return 0;
}
