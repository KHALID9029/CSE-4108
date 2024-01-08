#include<stdio.h>
#include<math.h>
int main()
{
    int div,x=30,total=0;
    while(x<=41)
    {
        div=2;
        while (x%div!=0&&div<=sqrt(x))
        {
            div++;
        }
        if (div>sqrt(x))
        {
            total+=div;
        }
        x++;
    }
    printf("total: %d\n",total);
    printf("div: %d\n",div);

    return 0;
}
