#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n>0) {sum+=n;}
    while(n>0)
    {
        printf("Enter a number:");
        scanf("%d",&n);
        if(n>0) {sum+=n;}
    }
    printf("%d\n",sum);

    return 0;
}

