#include<stdio.h>
int main()
{
    float dollar;
    printf("Enter an amount:");
    scanf("%f",&dollar);
    float pay=(dollar+dollar*5/100);
    printf("With Value Added %f",pay);

return 0;
}
