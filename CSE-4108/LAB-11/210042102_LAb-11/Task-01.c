#include<stdio.h>
void selection_sort(int ara[],int n)
{
    int x;
    if (n==0) return;
    int max=-9;
    for(int i=0;i<n;i++)
    {
        if(ara[i]>max) {max=ara[i]; x=i;}
    }
    ara[x]=ara[n-1];
    ara[n-1]=max;



    selection_sort(ara,n-1);
}
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int ara[10];
    printf("Enter 10 integers to be sorted:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&ara[i]);
    }
    selection_sort(ara,n);
    for(j=0;j<n;j++)
    {
        printf("%d ",ara[j]);
    }

    return 0;
}
