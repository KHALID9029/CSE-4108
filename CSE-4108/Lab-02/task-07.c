#include<stdio.h>
int main()
{
    printf("Enter a dollar amount:");
    int dollar;
    scanf("%d",&dollar);
    int bill20= dollar/20;
    printf("$20 bills: %d\n",bill20);

    int rem20= dollar%20;
    int bill10= rem20/10;
    printf("$10 bills: %d\n",bill10);

    int rem10= rem20%10;
    int bill5= rem10/5;
    printf("$5 bills: %d\n",bill5);


    int rem5= rem10%5;
    int bill1= rem5;
    printf("$1 bills: %d", bill1);





    return 0;
}
