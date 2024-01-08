#include<stdio.h>
int GCD(int x,int y)
{
    if(y!=0) return GCD (y,x%y);
    else return x;

}
int main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);
    ans=GCD(a,b);
    printf("%d",ans);


    return 0;
}
