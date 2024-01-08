#include<stdio.h>
int main()
{
    int n,i,temp,ara[10]={0};
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        ara[temp]++;
        n=n/10;
    }
    printf("Repeated digit(s):");
    for(i=0;i<10;i++)
    {
        if(ara[i]>1) {printf("%d ",i);}
    }


    return 0;
}
