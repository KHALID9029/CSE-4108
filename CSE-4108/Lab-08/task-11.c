#include<stdio.h>
int main()
{
    double n,n1,n2,value=0;
    char x,y;
    printf("Enter an expression:");
    scanf("%lf%c%lf",&n,&x,&n1);
    if(x=='+') {value=n+n1;}
    else if(x=='-') {value=n-n1;}
    else if(x=='*') {value=n*n1;}
    else if(x=='/') {value=n/n1;}

    while(1)
    {
       scanf("%c",&y);
       if(y=='\n') {break;}
      else
        {
            scanf("%lf",&n2);
       if(y=='+') {value=value+n2;}
       else if(y=='-') {value=value-n2;}
       else if(y=='*') {value=value*n2;}
       else if(y=='/') {value=value/n2;}
      }
    }

    printf("Value of expression %lf",value);

    return 0;
}
