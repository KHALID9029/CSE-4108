#include<stdio.h>
int main()
{
    int n,i,j,k,x;
    scanf("%d",&n);

    //first type
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
             printf("*");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    //second type
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
         for(k=1;k<=i;k++)
        {
             printf("*");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    //third type
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=(n-(i-1));j++)
      {printf(" ");}

      for(k=1;k<=i;k++)
      {printf("* ");}
    printf("\n");
    }

    return 0;
}
