#include<stdio.h>
int main()
{
    int ara[11];
    printf("Enter 10 numbers: ");
    int i;
    for(i=1;i<11;i++)
    {
        scanf("%d",&ara[i]);
    }
    int max=ara[1],min =ara[1],x=1,y=1;
    for(i=1;i<11;i++)
    {
        if(ara[i]>max) {max=ara[i];x=i;}
        if(ara[i]<min) {min=ara[i];y=i;}
    }

    printf("Max Position: %d\n",x);
    printf("Min Position: %d\n",y);

    return 0;
}
