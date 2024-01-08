#include<stdio.h>
int LCM(int a,int b,int k)
{
    if(k%a==0&&k%b==0) return k;
    return LCM(a,b,k+1);

}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",LCM(a,b,a));


    return 0;
}
