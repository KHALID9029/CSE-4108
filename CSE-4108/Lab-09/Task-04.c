#include<stdio.h>
#define n (int)(sizeof(ara)/sizeof(ara[0]))
int main()
{
    int ara[10],i;
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("In reverse order:");
    for(i=n-1;i>=0;i--)
    {
        printf(" %d",ara[i]);
    }


    return 0;
}
