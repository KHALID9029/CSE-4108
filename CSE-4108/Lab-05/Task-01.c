#include<stdio.h>
int main()
{
    printf("Enter a number:");
    int num;
    scanf("%d",&num);

    if (num/10==0)
    {
        printf("The number %d has 1 digit",num);
    }


    else if (num/100==0)
    {
        printf("The number %d has 2 digits",num);
    }

    else if (num/1000==0)
    {
        printf("The number %d has 3 digits",num);
    }

    else {printf("The number %d has 4 digits",num);
    }



    return 0;
}
