#include<stdio.h>
int main()
{
    int n;
    char x,y;
    printf("Enter shift amount (1-25):");
    scanf("%d",&n);
    getchar();
    printf("Enter a message to be encrypted:");
    while(1)
    {
        x=getchar();
        if(x=='\n') {break;}
        else if ((x>='A'&&x<='Z')||(x>='a'&&x<='z'))
        {
            printf("%c",x+n);
        }
        else {printf("%c",x);}
    }


    return 0;
}
