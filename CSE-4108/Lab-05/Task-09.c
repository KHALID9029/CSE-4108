#include<stdio.h>
int main()
{
    int mm,dd,yy,mm2,dd2,yy2;
    printf("Enter first date (mm/dd/yy):");
    scanf("%d/%d/%d",&mm,&dd,&yy);

    printf("Enter second date (mm/dd/yy):");
    scanf("%d/%d/%d",&mm2,&dd2,&yy2);

    if (yy>yy2)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",mm2,dd2,yy2,mm,dd,yy);

    else if (yy2>yy)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",mm,dd,yy,mm2,dd2,yy2);

    else if (yy==yy2 && mm>mm2)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",mm2,dd2,yy2,mm,dd,yy);

    else if (yy==yy2 && mm<mm2)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",mm,dd,yy,mm2,dd2,yy2);

    else if (yy==yy2&&mm==mm2&&dd>dd2)
         printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",mm2,dd2,yy2,mm,dd,yy);

    else if (yy==yy2&&mm==mm2&&dd<dd2)
         printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",mm,dd,yy,mm2,dd2,yy2);



return 0;
}
