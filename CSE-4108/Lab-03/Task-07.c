#include<stdio.h>
int main()
{
    printf("Enter a five-digit integer:");
    int num;
    scanf("%d",&num);

    int sum1= num/10000;
    int rem1= num%10000;

    int sum2= rem1/1000;
    int rem2= rem1%1000;

    int sum3= rem2/100;
    int rem3= rem2%100;

    int sum4= rem3/10;
    int rem4= rem3%10;

    int sum5= rem4;

    int sum=sum1+sum2+sum3+sum4+sum5;
    printf("The sum is: %d",sum);


return 0;
}
