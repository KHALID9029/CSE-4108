#include<stdio.h>
void read_string(char ch[],int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        ch[i]=getchar();
    }
}

char to_lowercase(char ch)
{
    if(ch>='A'&&ch<='Z')
    {
        ch=ch-'A'+'a';
    }
    return ch;
}

void print_string(char ch[],int length)
{
    int j;
    for(j=0;j<length;j++)
    {
        putchar(ch[j]);
    }
}
int main()
{
    int length;
    scanf("%d",&length);
    getchar();
    char ch[length];

    read_string (ch,length);
    int i;
    for(i=0;i<length;i++)
    {
        ch[i]=to_lowercase(ch[i]);

    }
    print_string(ch,length);

    return 0;
}
