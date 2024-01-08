#include<stdio.h>
int main()
{
 float trade,com;
 while(1)
 {
     printf("Enter value of trade:");
     scanf("%f",&trade);
     if (trade<=0)
     {
         return 0;
     }

     else if (trade<2500)
     {
         com= 30 + (trade*1.7f/100.0f);
     }

     else if (trade>=2500&&trade<6250)
     {
         com= 56 +(trade*0.66f/100.0f);
     }

     else if (trade>=6250&&trade<20000)
     {
         com= 76 +(trade*0.34f/100.0f);
     }

     else if (trade>=20000&&trade<50000)
     {
         com= 100 +(trade*0.22f/100.0f);
     }

     else if (trade>=50000&&trade<500000)
     {
         com= 155 +(trade*0.11f/100.0f);
     }

     else if (trade>=500000)
     {
         com= 255 +(trade*0.09f/100.0f);
     }

   com>39? printf("Commission:$%.2f\n",com): printf("Commission:$39\n");
 }
    return 0;
}
