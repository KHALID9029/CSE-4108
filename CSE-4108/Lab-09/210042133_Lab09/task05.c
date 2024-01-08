#include <stdio.h>
#include <string.h>
int main()
{
    int low, months, rates[5];
    printf("Enter Interest rate: ");
    scanf("%d", &low);
    printf("Enter number of months: ");
    scanf("%d", &months);

    rates[0] = low;
    for(int i = 1; i < 5; i++) rates[i] = rates[i-1]+1;
    printf("Months\t");
    for(int i = 0; i < 5; i++) printf("%3d%%\t", rates[i]);
    printf("\n");

    double balance[5];
    for(int i = 0; i < 5; i++) balance[i] = 100;

    for(int i = 1; i<=months; i++)
    {
        printf("%3d\t", i);
        for(int j = 0; j < 5; j++)
        {
            balance[j] += balance[j]*(rates[j]/(100.00*12));
            printf("%.2lf\t", balance[j]);
        }
        printf("\n");
    }

    return 0;
}
