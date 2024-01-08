#include<stdio.h>
int main()
{
    int n,i;
    float e=2;
    printf("Enter an integer:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
      float x= i*(i-1);

      e+= (1.0f/x);

    }
    printf("%f\n",e);
    return 0;
}
