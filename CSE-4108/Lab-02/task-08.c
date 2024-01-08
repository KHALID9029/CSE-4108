#include<stdio.h>
int main()
{
    printf("Enter amount of loan:");
    float loan;
    scanf("%f",&loan);

    printf("Enter interest rate:");
    float rate;
    scanf("%f",&rate);

    printf("Enter monthly payment:");
    float pay;
    scanf("%f",&pay);

    float balance1= (loan - pay + (loan*rate/1200.0f));
    printf ("Balance remaining after first payment: %.2f\n",balance1);

    float balance2= (balance1 - pay + (balance1*rate/1200.0f));
    printf("Balance remaining after second payment: %.2f\n",balance2);

    float balance3= (balance2 - pay + (balance2*rate/1200.0f));
    printf("Balance remaining after third payment: %.2f",balance3);

    return 0;
}
