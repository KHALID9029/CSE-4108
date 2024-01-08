#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k,ans=0;
    char x,s[1000],rs[1000],cm[1000];
    printf("Enter a message: ");
    gets(s);
    int l=strlen(s);

    for(i=0;i<l;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=tolower(s[i]);
        }
    }
    for(i=0,j=0;i<l;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            rs[j]=s[i];
            j++;
        }
    }
    int rl=strlen(rs);


    for(i=0,k=rl-1;i<rl;i++,k--)
    {
        cm[i]=rs[k];
    }


    for(i=0;i<rl;i++)
    {
        if(rs[i]!=cm[i]) {ans++;}
    }

    if(ans==0) {printf("Palindrome\n");}
    else if(ans!=0) {printf("Not a Palindrome\n");}

    return 0;
}
