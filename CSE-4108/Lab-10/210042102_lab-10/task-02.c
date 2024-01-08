#include<stdio.h>
#include<math.h>
int poly(int x)
{
    int ans;
    ans= 2*pow(x,7) + pow(x,6) - 4*pow(x,5) - 2*pow(x,4) + pow(x,3) + (2*x) +10;
    return ans;
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",poly(x));

    return 0;
}
