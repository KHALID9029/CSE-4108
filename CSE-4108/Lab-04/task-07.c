#include<stdio.h>
int main()
{

  printf("Enter first number:");
  int num1;
  scanf("%d",&num1);

  printf("Enter second number:");
  int num2;
  scanf("%d",&num2);

  int temp=num1;
  num1=num2;
  num2=temp;

  printf("%d\n%d",num1,num2);


    return 0;
}

