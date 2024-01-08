#include<stdio.h>
int main()
{
    printf("Enter a three-digit number: ");
    int num;
    scanf("%d",&num);

    int n1= num/100;
    int rem1= num%100;
    int n2= rem1/10;
    int rem2= rem1%10;
    int n3= rem2;

    printf("The reversal is:%d%d%d",n3, n2,n1);




    return 0;
}
