#include<stdio.h>
int main()
{
    int i,j,ara[5][5],sum=0;
    for(i=0;i<5;i++)                  //scanning
    {
      printf("Enter row %d:",i+1);
      for(j=0;j<5;j++)
      {
          scanf("%d",&ara[i][j]);
      }
    }


    //row totals
    printf("Row Totals:");
    for(i=0;i<5;i++)
    {
        sum=0;
        for(j=0;j<5;j++)
        {
            sum+=ara[i][j];
        }
        printf("%d ",sum);
    }
    printf("\n");
    //column totals
    printf("Column Totals:");
     for(i=0;i<5;i++)
    {
        sum=0;
        for(j=0;j<5;j++)
        {
            sum+=ara[j][i];
        }
        printf("%d ",sum);
    }


    return 0;
}
