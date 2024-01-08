#include<stdio.h>
int main()
{
    int n,a,b,x,y,c;

    printf("Enter size of magic square(1-99):");
    scanf("%d",&n);

    int ara[n][n];

    for(x=0;x<n;x++)
    {
        for(y=0;y<n;y++)
        {
            ara[x][y]=0;
        }
    }

    x=n/2;
    y=0;
    ara[x][y]=1;

    c=2;
    while(c<=n*n)
    {
        a=x;
        b=y;

        if(a+1>=n) {x=0;}
        else  {x=a+1;}

        if(b-1<0) {y=n-1;}
        else {y=b-1;}

        if(ara[x][y]==0) {ara[x][y]=c;c++;}
        else
        {
            if(b+1>=n) {ara[x=a][y=0]=c;c++;}
            else {ara[x=a][y=b+1]=c;c++;}
        }
    }

    for(y=0;y<n;y++)
    {
        for(x=0;x<n;x++)
        {
            printf("%4d",ara[x][y]);
        }
        printf("\n");
    }


    return 0;
}
