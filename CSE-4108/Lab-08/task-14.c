#include<stdio.h>
int main()
{
    int n,i,fac=1;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    if(n==0) {printf("Factorial of %d: %d",n,fac);}
    else if(n==1) {printf("Factorial of %d: %d",n,fac);}
    else
    {
        for(i=n;i>1;i--)
        {
            fac=fac*i;
        }
        printf("Factorial of %d: %d",n,fac);
    }
    return 0;
}
