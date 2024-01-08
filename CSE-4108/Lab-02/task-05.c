#include<stdio.h>
int main ()
{
    printf("Enter the value of x:");
    int x;
    scanf("%d",&x);
    int y=(3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x -6);
    printf ("The Value Of The Polynomial:%d",y);

return 0;
}
