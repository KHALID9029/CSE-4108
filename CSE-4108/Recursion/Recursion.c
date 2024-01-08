#include<stdio.h>
int pow(int n, int p)
{
    if(p==0) {return 1;}
    return (n*pow(n,p-1));
}
int main()
{
    int x=pow(2,5);
    printf("%d\n",x);

    return 0;
}


PRINT N TO 1
void print(int n)
{
    if(n==0) return;
    printf("%d ",n);
    return print(n-1);
}


PRINT 1 TO N
void printr(int n)
{
    if(n==0) return;
    return printr(n-1);
    printf("%d ",n);
}

SUM OF 1 TO N
int sum(int n)
{
    if(n==1) return 1;
    return n+sum(n-1);
}


NUMBER OF DIGITS IN A NUMBER
int ct(int n)
{
    if(n==0) return 0;
    return 1+ct(n/10);
}

SUM OF DIGITS IN A NUMBER
int ct(int n)
{
    if(n==0) return 0;
    return (n%10)+ct(n/10);
}


GCD
int GCD(int n,int m)
{
    if(m==0) return n;
    return GCD(m,n%m);
}

//LCM
int LCM(int a, int b,int k)
{
    if(k%a==0&&k%b==0) return k;
    return (a,b,k+1);
}

//Nth NUMBER IN FIBONACCI SERIES
int fibo(int i)
{
    if(i==1||i==2) return 1;
    return fibo(i-1)+fibo(i-2);
}

//PRINT ARRAY
void pass(int a[],int k,int m)
{
    if(m>=k) return;
    printf("%d ",a[m]);
    return pass(a,k,m+1);
}
int main()
{
    int i,k;
    scanf("%d",&k);
    int a[k];
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    pass(a,k,0);
    return 0;
}


PRINT REVERSE array
void reverse(int a[],int m,int k)
{
    if(m<0) return;
    printf("%d ",a[m]);
    return reverse (a,m-1,k);
}
int main()
{
    int i,k;
    scanf("%d",&k);
    int a[k];
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,k-1,k);
    return 0;
}
