#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
    printf("Enter the numbers from 1 to 16 in any order:");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);

    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);

    int r1=a+b+c+d; int r2=e+f+g+h; int r3= i+j+k+l; int r4= m+n+o+p;
    int c1=a+e+i+m; int c2=b+f+j+n; int c3= c+g+k+o; int c4= d+h+l+p;
    int d1=a+f+k+p; int d2= d+g+j+m;

    printf("Row Sums: %d %d %d %d\nColumn Sums: %d %d %d %d\nDiagonal sums: %d %d",r1,r2,r3,r4,c1,c2,c3,c4,d1,d2);


    return 0;
}
