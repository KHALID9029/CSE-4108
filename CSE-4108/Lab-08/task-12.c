#include<stdio.h>
int main()
{
    int word=1,ch=0;
    char x;
    printf("Enter a sentence:");
    while(1)
    {
        x=getchar();
        if(x=='\n') {break;}
        else
        {
            ch++;
        }
        if (x==' ') {word++; ch--;}
    }
    double ans= (double) ch/word;
    printf("%lf\n",ans);

    return 0;
}
