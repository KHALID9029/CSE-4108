#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number between 0 and 32767:");
    scanf("%d",&num);

    int oc5= num%8;
    int num2= num/8;

    int oc4= num2%8;
    int num3= num2/8;

    int oc3= num3%8;
    int num4= num3/8;

    int oc2= num4%8;
    int num5= num4/8;

    int oc1= num5%8;

    printf("%d%d%d%d%d",oc1,oc2,oc3,oc4,oc5);







    return 0;
}
