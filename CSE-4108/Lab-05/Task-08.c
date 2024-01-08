#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&h,&m);

    if (h<12 && h!=0)
    {
       if (h>=8 && h<=9)
        printf("Closest departure time is 8:00 a.m.,arriving at 10:16 a.m.");
       else if (h>9&&h<=10)
        printf("Closest departure time is 9:43 a.m.,arriving at 11:52 a.m.");
       else if (h>10&&h<=11)
        printf("Closest departure time is 11:19 a.m.,arriving at 1:31 p.m.");
    }

    else if (h==12)
    {

        printf("Closest departure time is 12:47 p.m.,arriving at 3:00 p.m.");

    }

    else if (h>12 && h<24)
    {
        int nh=h-12;
        if (nh=1)
            printf("Closest departure time is 12:47 p.m.,arriving at 3:00 p.m.");
        else if (nh=2)
            printf("Closest departure time is 2:00 p.m.,arriving at 4:08 p.m.");
        else if (nh>2&&nh<=5)
            printf("Closest departure time is 3:45 p.m.,arriving at 5:55 p.m.");
        else if (nh>5&&nh<=8)
            printf("Closest departure time is 7:00 p.m.,arriving at 9:20 p.m.");
        else if (nh>8&&nh<=12)
            printf("Closest departure time is 9:45 p.m.,arriving at 11:58 p.m.");
    }


    else if (h>=24)
    {
        printf("The time does not exists");
    }





    return 0;
}
