#include<stdio.h>
int main()
{
    int i,j,ara[5][5],sum=0,max,min;
    double avg[5];
    for(i=0;i<5;i++)                  //scanning
    {
      printf("Enter Quiz %d marks:",i+1);
      for(j=0;j<5;j++)
      {
          scanf("%d",&ara[i][j]);
      }
    }


    //totals score & average score
    printf("Total Score:");
     for(i=0;i<5;i++)
    {
        sum=0;
        for(j=0;j<5;j++)
        {
            sum+=ara[j][i];
        }
        printf("%d ",sum);
        avg[i]=(double) sum/5;
    }
    printf("\n");
    printf("Average Score:");
    for(i=0;i<5;i++)
    {
        printf("%.2lf ",avg[i]);
    }
     printf("\n");

    //max & min
    for(i=0;i<5;i++)
    {
        printf("High Score and low score for Quiz %d:",i+1);
        max=min=ara[i][0];
        for(j=0;j<5;j++)
        {
            if (ara[i][j]>max) {max=ara[i][j];}
            if (ara[i][j]<min) {min=ara[i][j];}
        }
        printf("%d %d\n",max,min);
    }



    return 0;
}

