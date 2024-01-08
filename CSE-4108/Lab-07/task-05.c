#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,a,b,c,d,rem1,rem2,rem3;
    printf("Enter a number:");
    scanf("%d",&n);
        a=n/100;
        rem1=n%100;
        b=rem1/10;
        c=rem1%10;
        x= (pow(a,3))+(pow(b,3))+(pow(c,3));
        if (n==x)
        {
            printf("YES\n");
        }
        else {printf("NO\n");}



    return 0;
}
