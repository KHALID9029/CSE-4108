#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    int y,z,i,ans=1,ara[26]={0};
    printf("Enter first word:");
    while(1)
    {
        x=getchar();
        if(x=='\n') {break;}
        y=x-97;
        ara[y]++;
    }

    printf("Enter second word:");
    while(1)
    {
        x=getchar();
        if(x=='\n') {break;}
        z=x-97;
        ara[z]--;
    }

    for(i=0;i<26;i++)
    {
        if(ara[i]!=0) {ans=0;}
    }
    if(ans) {printf("The Words are anagrams\n");}
    else {printf("The Words are not anagrams\n");}
    return 0;
}
