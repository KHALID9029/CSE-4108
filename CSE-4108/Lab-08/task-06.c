#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,z,nom,di;
    char s;
    scanf("%d/%d%c%d/%d",&a,&b,&s,&c,&d);
    if(s=='+')
    {
         x= b*d;
         y= a*d;
         z= c*b;
         nom= y+z;
         printf("%d/%d",nom,x);
    }

    else if (s=='-')
    {
         x= b*d;
         y= a*d;
         z= c*b;
         nom= y-z;
         printf("%d/%d",nom,x);
    }

    else if(s=='*')
    {
        x=a*c;
        y=b*d;
        printf("%d/%d",x,y);
    }

    else if (s=='/')
    {
        x=a*d;
        y=b*c;
        printf("%d/%d",x,y);
    }

    return 0;
}
