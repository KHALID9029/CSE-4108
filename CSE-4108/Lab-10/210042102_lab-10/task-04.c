#include<stdio.h>
void SCAN(int ara[],int l)
{
    int i;
    for(i=1;i<=l;i++)
    {
        scanf("%d",&ara[i]);
    }
}
int stone (int ara[],int l,int x)
{
    int j;
    for(j=1;j<=l;j++)
    {
        if (x<ara[j]&&x<ara[j+1]) return j;
    }
}
int main()
{
    int l,x;
    scanf("%d",&l);
    int ara[l+1];
    SCAN(ara,l);
    scanf("%d",&x);
    printf("%d",stone(ara,l,x));
}
