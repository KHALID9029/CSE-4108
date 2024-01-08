#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter a number: ");
    scanf("%d", &n);
/* first work with the upper part. The loop will run n times*/

  for(i = 1; i <= n; i++)
    {
        for(j = 0; j < (n - i); j++)       //then work with the spaces in each  line starting from j=0 number of spaces is one less then n
        {
          printf(" ");
        }
        for(j = 0; j < (2 * i - 1); j++)   //then comes the * in each line starting from j=0 number of * is 2*i -1
        {
            printf("*");
        }
        printf("\n");
    }

    if(n % 2 == 0)   //lastly the root part where
     {
         k = n - 1;
     }
    else
     {
         k = n;
     }
    for(i = 1; i <= n; i++)
    {
        for(j = 0; j < n / 2; j++)
        {
            printf(" ");
        }
        for(j = 0; j < k; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
