#include<stdio.h>
int main()
{
    printf("Enter the first 11 digits of an UPC:");
    long long int num;
    scanf("%lld",&num);

    long long int num1= num/10000000000;
    long long int rem1= num%10000000000;


    long long int num2= rem1/1000000000;
    long long int rem2= rem1%1000000000;

    long long int num3= rem2/100000000;
    long long int rem3= rem2%100000000;

    long long int num4= rem3/10000000;
    long long int rem4= rem3%100000000;

    long long int num5= rem4/1000000;
    long long int rem5= rem4%10000000;

    long long int num6= rem5/100000;
    long long int rem6= rem5%100000;

    long long int num7= rem6/10000;
    long long int rem7= rem6%10000;

    long long int num8= rem7/1000;
    long long int rem8= rem7%1000;

    long long int num9= rem8/100;
    long long int rem9= rem8%100;

    long long int num10= rem9/10;
    long long int rem10= rem9%10;

    long long int num11= rem10;




    long long int sum1= num2+num4+num6+num8+num10;
    long long int sum2= num1+num3+num5+num7+num9+num11;

    long long int c= (sum2*3)+sum1;
    long long int d= c-1;
    long long int e= d%10;
    long long int f= 9-e;


    printf("Check Digit: %lld",f);










    return 0;
}

