#include<stdio.h>
int main()
{
    int n;
    double rt=1,ort=0;
    printf("Enter a positive number:");
    scanf("%d",&n);
    while(ort!=rt)
    {
        ort=rt;
        rt=((n/rt)+rt)/2;
    }
    printf("%lf\n",rt);

    return 0;
}

