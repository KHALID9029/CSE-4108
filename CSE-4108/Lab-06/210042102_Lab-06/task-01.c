#include<stdio.h>
int main()
{
   double i,x,y,ans;

   printf("Enter a number:");
   scanf("%lf",&x);
   ans=x;
   while(y>0)
   {
       printf("Enter a number:");
       scanf("%lf",&y);
       if (y>x)
       {
           ans=y;
           x=y;
       }
   }

   printf("The largest number was%.2lf",ans);


    return 0;
}
