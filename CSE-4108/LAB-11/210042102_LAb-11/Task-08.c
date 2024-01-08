#include<stdio.h>
void find_closest_flight (int h,int m,int *departure_time,int *arriving_time)
{
     if (h<12 && h!=0)
    {
       if (h>=8 && h<=9)
         {*departure_time=480;*arriving_time=616;}
       else if (h>9&&h<=10)
        {*departure_time=583;*arriving_time=712;}
       else if (h>10&&h<=11)
        {*departure_time=679;*arriving_time=811;}
    }

    else if (h==12)
    {

        *departure_time=767,*arriving_time=900;

    }

    else if (h>12 && h<24)
    {
        int nh=h-12;
        if (nh=1)
            {*departure_time=767;*arriving_time=900;}
        else if (nh=2)
            {*departure_time=840;*arriving_time=968;}
        else if (nh>2&&nh<=5)
            {*departure_time=945;*arriving_time=1075;}
        else if (nh>5&&nh<=8)
            {*departure_time=1140;*arriving_time=1280;}
        else if (nh>8&&nh<=12)
            {*departure_time=1065;*arriving_time=1438;}
    }

}
int main()
{
    int h,m,departure_time,arrival_time;
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&h,&m);
    find_closest_flight (h,m,&departure_time,&arrival_time);
    printf("%d %d",departure_time,arrival_time);





    return 0;
}

