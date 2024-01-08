#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&h,&m);

    if (h<12 && h>=0)
    {
        printf("Equivalent 12-hour time:%.2d:%.2d AM",h,m);
    }

    else if (h==12)
    {
        printf("Equivalent 12-hour time:12:%.2d PM",m);
    }

    else if (h>12 && h<24)
    {
        int nh=h-12;
        printf("Equivalent 12-hour time:%.2d:%.2d PM",nh,m);
    }

    else if (h==0)
    {
        int h1=12;
        printf("Equivalent 12-hour time:%d:%.2d AM",h1,m);
    }

    else if (h>=24)
    {
        printf("The time does not exists");
    }





    return 0;
}
