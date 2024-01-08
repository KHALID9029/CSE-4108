#include<stdio.h>
int main()
{
    int n,i=0,j=1,x=0;
    printf("Enter an integer:");
    scanf("%d",&n);
    printf("0 1 ");
    while(x<n)
    {
        x=i+j;
        i=j;
        j=x;
        if (x<n)
        {printf("%d ",x);}
    }

    return 0;
}
