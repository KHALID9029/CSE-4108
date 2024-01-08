#include<stdio.h>
int main()
{
    int hh,mm,t;
    char x,y;
    printf("Enter a 12-hour time:");
    scanf("%d:%d%c%c",&hh,&mm,&x,&y);
    if(x=='a'||x=='A')
    {
        hh=hh*60;
        t=hh+mm;
    }
    else
    {
        hh=(hh+12)*60;
        t=hh+mm;
    }

    if(t<=480) {printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");}
    else if (t>480 && t<=583) {printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");}
    else if (t>583 && t<=679) {printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");}
    else if (t>679 && t<=767) {printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");}
    else if (t>767 && t<=840) {printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");}
    else if (t>840 && t<=945) {printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");}
    else if (t>945 && t<=1140) {printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");}
    else if (t>1140 && t<=1305) {printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");}

    return 0;
}
