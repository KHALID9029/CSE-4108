#include<stdio.h>
int main()
{
    int x,y,i,ans=1;
    printf("Enter two integers:");
    scanf("%d %d",&x,&y);

    if (x==0&&y!=0)
    {
        ans=y;
    }
    else if (y==0&&x!=0)
    {
        ans=x;
    }
    else if (x==0&&y==0)
    {
        ans=1;
    }
    else
    {
        for(i=2;i<=x&&i<=y;i++)
       {
        if(x%i==0&&y%i==0)
        {
            ans=i;
        }

       }
    }
    printf("Greatest common division: %d",ans);

    return 0;
}




