#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);

    printf("GSI prefix: %d\nGroup Identifier: %d\nPublisher Code: %d\nItem Number: %d\nCheck Digit: %d",a,b,c,d,e);


    return 0;
}
