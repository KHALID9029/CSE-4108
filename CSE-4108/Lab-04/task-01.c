#include<stdio.h>
int main()
{
    printf("Enter a two-digit number: ");
    int num;
    scanf("%d",&num);

    int n1= num/10;
    int n2= num%10;

    printf("The reversal is:%d%d",n2,n1);



    return 0;
}
