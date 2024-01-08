#include<stdio.h>
int main()
{
    char x;
    printf("Enter a sentence:");
    while(1)
    {
        x=getchar();
        if(x=='\n') {break;}
    }
    printf("%c",x);

    return 0;
}
