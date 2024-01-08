#include<stdio.h>
int main()
{
    int i,j,k,rate,year,value=100;
    printf("Enter interest rate:");
    scanf("%d",&rate);
    printf("Enter Number of years:");
    scanf("%d",&year);
    double val[year];

    printf("Years");
    for(i=0;i<year;i++)
    {
        printf("%6d%%",rate+i);  //printing the 1st row
        val[i]=value;            //assigning 100 to all val[i]
    }
    printf("\n");

    for(j=1;j<=year;j++)         //to print each row
    {
        printf("%3d   ",j);
        for(k=0;k<year;k++)      //to print the values in each row
        {
            double y= (double)(rate+k)/100;
            val[k]+= y*val[k];
            printf("%7.2f",val[k]);
        }
        printf("\n");
    }

    return 0;
}
