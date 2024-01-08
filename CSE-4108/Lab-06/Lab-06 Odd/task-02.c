#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x=0;
    printf("Enter  the value of n:");
    scanf("%d",&n);
    for(i=1;x<=n;i++)
    {
      x=pow(i,2);
      if(x%2==0)
      {
          printf("%d\n",x)
;      }

    }

    return 0;
}

