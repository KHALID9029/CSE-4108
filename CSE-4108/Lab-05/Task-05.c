#include<stdio.h>
int main()
{

    printf("Enter the last digit of the UPC:");
    int last;
    scanf("%d",&last);

     int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,c,d,e,f;
  printf("Enter the first 11 digits of an UPC:");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);


    int sum1= n2+n4+n6+n8+n10;
    int sum2= n1+n3+n5+n7+n9+n11;

    c= (sum2*3)+sum1;

    d= c-1;
    e= d%10;
    f= 9-e;


    if (f==last)
        printf("VALID");
    else
        printf("NOT VALID");


return 0;
}


