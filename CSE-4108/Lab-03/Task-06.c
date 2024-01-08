#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter two fractions separated by a plus sign:");
    scanf("%d/%d + %d/%d",&a,&b,&c,&d);

    int de = b*d;
    int nu= ((de/b)*a) + ((de/d)*c);
    printf("%d/%d",nu,de);


    return 0;
}
