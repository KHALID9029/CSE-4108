#include<stdio.h>
void pay_amount (int dollar , int *twenties , int *tens ,int *fives , int *ones)
{
    *twenties=dollar/20;
    dollar-=(*twenties*20);
    *tens=dollar/10;
    dollar-=(*tens*10);
    *fives=dollar/5;
    dollar-=(*fives*5);
    *ones=dollar;
}
int main()
{
    int dollar,twenties,tens,fives,ones;
    scanf("%d",&dollar);
    pay_amount (dollar ,&twenties , &tens ,&fives ,&ones);
    printf("$20 dollar bills:%d\n",twenties);
    printf("$10 dollar bills:%d\n",tens);
    printf("$5 dollar bills:%d\n",fives);
    printf("$1 dollar bills:%d\n",ones);


    return 0;
}
