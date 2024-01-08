#include<stdio.h>
int main()
{
    int n,x,rem,b=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        if (rem==4||rem==7)
        {

        }
        else {b++;}
    }
    if (b==0) {printf("Yes\n");}
    else {printf("No\n");}
  return 0;
}
