#include<stdio.h>
int main()
{
    int x,y,i,a,b,ans=1;
    printf("Enter a fraction:");
    scanf("%d/%d",&x,&y);

    for(i=2;i<=x&&i<=y;i++)
       {
        if(x%i==0&&y%i==0)
        {
            ans=i;
        }

       }

     a=x/ans;
     b=y/ans;
     printf("In lowest terms:%d/%d",a,b);

    return 0;
}
