#include<stdio.h>
int main()
{
    int x=0;
    char a,b,c;
    printf("Enter a first and last name:");
    a=getchar();
    while (1)
    {
        b=getchar();
        if(b>='A'&&b<='Z')
        {
            printf("%c",b);
            break;
        }
    }

    while(c!='\n')
    {
        c=getchar();
        if(c=='\n') {break;}
        printf("%c",c);
    }

    printf(",%c.",a);


    return 0;
}
