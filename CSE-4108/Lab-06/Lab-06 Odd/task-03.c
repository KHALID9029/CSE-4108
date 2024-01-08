#include<stdio.h>
int main()
{
    int n1,n,ip=0,sum=0,max,odd=0;
    double avg;
    printf("Enter a number:");
    scanf("%d",&n1);
    sum+=n1;
    int x=n1;
    if(n%2!=0) {odd++;}

    while(n>0)
    {
        printf("Enter a number:");
        scanf("%d",&n);

        ip++;
        sum+=n;

        if(n%2!=0) {odd++;}
        if(n>x) {max=n; x=n;}
    }
    avg=(double) sum/ip;

    printf("The number of inputs is: %d\n",ip);
    printf("The sum of the input value is: %d\n",sum);
    printf("The average of the input value is: %.2lf\n",avg);
    printf("the number of odd values input is: %d\n",odd);
    printf("The maximum value entered was: %d\n",max);

    return 0;
}
