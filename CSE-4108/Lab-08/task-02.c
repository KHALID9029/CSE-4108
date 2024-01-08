#include<stdio.h>
int main()
{
    double n,sum=0;
    printf("Enter a number:");
    scanf("%lf",&n);
    if(n>0) {sum+=n;}
    while(n>0)
    {
        printf("Enter a number:");
        scanf("%lf",&n);
        if(n>0) {sum+=n;}
    }
    printf("%lf\n",sum);

    return 0;
}
