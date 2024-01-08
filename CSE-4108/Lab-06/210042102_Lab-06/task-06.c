#include<stdio.h>
int main()
{
    int mm,dd,yy,mm1,dd1,yy1,ans1,ans2,ans3;
    printf("Enter a date (mm/dd/yy):");
    scanf("%d/%d/%d",&mm,&dd,&yy);
    ans1=mm;
    ans2=dd;
    ans3=yy;

    while (1)
    {
        printf("Enter a date (mm/dd/yy):");
    scanf("%d/%d/%d",&mm1,&dd1,&yy1);

    if (mm1==0&&dd1==0&&yy1==0)
    {
        printf("%d/%d/%d is the earliest date",ans1,ans2,ans3);

        return 0;
    }

    else if (yy1<yy)
    {
    ans1=mm1; mm=mm1;
    ans2=dd1; dd=dd1;
    ans3=yy1; yy=yy1;
    }

    else if(yy1==yy&&mm1<mm)
    {
   ans1=mm1; mm=mm1;
    ans2=dd1; dd=dd1;
    ans3=yy1; yy=yy1;
    }

    else if (yy1==yy&&mm1==mm&&dd1<dd)
    {
    ans1=mm1; mm=mm1;
    ans2=dd1; dd=dd1;
    ans3=yy1; yy=yy1;
    }

   }


    return 0;
}
