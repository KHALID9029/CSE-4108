#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter first number:");
  scanf("%d",&a);

  printf("Enter second number:");
  scanf("%d",&b);

  a=a-b;
  b=a+b;
  a=b-a;

  printf("Now the first number is: %d\n",a);
   printf("Now the seconnd number is: %d\n",b);


    return 0;
}

