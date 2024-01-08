#include<stdio.h>
int main()
{
    int hh,mm,ahh,amm;
    char x,y;
    scanf("%d:%d %c%c",&hh,&mm,&x,&y);
    if (x=='A')
    {
        if (hh==12) {ahh=00; amm=mm;}
        else {ahh=hh; amm=mm;}
    }

    else if (x=='P')
    {
        if (hh==12) {ahh=12; amm=mm;}
        else {ahh=12+hh; amm=mm;}
    }
    printf("%d:%d",ahh,amm);

    return 0;
}
