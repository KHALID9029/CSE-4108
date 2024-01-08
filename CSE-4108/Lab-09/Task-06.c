#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    while(1)
    {
        x=getchar();
        x=toupper(x);
        if (x=='\n') {break;}
        else if (x=='A') {printf("4");}
        else if(x=='B') {printf("8");}
        else if(x=='E') {printf("3");}
        else if(x=='I') {printf("1");}
        else if(x=='O') {printf("0");}
        else if(x=='S') {printf("5");}
        else {printf("%c",x);}
    }
    printf("!!!!!!!!!!");


    return 0;
}
