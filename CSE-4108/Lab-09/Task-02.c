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
    printf("Digit:");
    for(i=0;i<10;i++)
    {
        if(i==0) {printf("%9d",i);}
        else {printf("%3d",i);}
    }
    printf("\n");
    printf("Occurrences:");
    for(i=0;i<10;i++)
    {
         {printf("%3d",ara[i]);}
    }



    return 0;
}
