#include<stdio.h>
int main()
{
    int i, n, start_day;
    printf("Enter number of days in month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);
    printf(" Mo Tu We Th Fr Sa Su\n");
    for (i = 1; i <start_day; i++)
    {printf("   ");}
    for (i = 1; i <= n; i++)
    {
      printf("%3d", i);
      if ((start_day + i - 1) % 7 == 0)
      {printf("\n");}
    }

    return 0;
}

