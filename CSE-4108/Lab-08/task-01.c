#include<stdio.h>
int main()
{
    int n,i,y,count=0;
    char x;
    scanf("%d",&n);
    for(i=1;y<=n;i++)
    {
        y=i*i;
        if(i%2==0)
        {
            printf("%d\n",y);
            count++;
            if(count==24)
            {
                count=0;
                printf("Press enter to continue\n");
                getchar();
                if(getchar ()=='\n')
                {
                  continue;
                }


            }
        }
    }

    return 0;
}
