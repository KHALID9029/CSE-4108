#include<stdio.h>
int main()
{
    int i;
    float e=2,n;
    printf("Enter a floating point:");
    scanf("%f",&n);
    for(i=2;;i++)
    {
      float x= i*(i-1);
      float y= 1.0f/x;
      if(y<n) {break;}
      else
       {
        e+= (1.0f/x);
       }

    }
    printf("%f\n",e);
    return 0;
}
