#include<stdio.h>
int main()
{
    int x= sizeof(int);
    int y= sizeof(short);
    int z= sizeof(long);
    int a= sizeof(long long);
    int b= sizeof(float);
    int c= sizeof(double);
    int d= sizeof(long double);

    printf("%d %d %d %d %d %d %d",x,y,z,a,b,c,d);


    return 0;
}
