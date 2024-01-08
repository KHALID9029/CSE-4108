#include<stdio.h>
int main()
{
    int n,i,x,temp,ara[10]={0};
    printf("Enter a number:");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        while(x!=0)
    {
        temp=x%10;
        ara[temp]++;
        x=x/10;
    }
    printf("Repeated digit(s):");
    for(i=0;i<10;i++)
    {
        if(ara[i]>1) {printf("%d ",i);}
    }
    printf("\n");
    printf("Enter a number:");
    scanf("%d",&n);
    x=n;

    }
    return 0;
}

