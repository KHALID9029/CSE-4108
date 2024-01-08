#include<stdio.h>
int main()
{
    char n;
    int sum=0;
    while(1)
    {
        n=getchar();
        if(n=='\n') {break;}
        else if (n=='A'||n=='a'||n=='E'||n=='e'||n=='I'||n=='i'||n=='L'||n=='l'||n=='N'||n=='n'||n=='O'||n=='o'||n=='R'||n=='r'||n=='S'||n=='s'||n=='T'||n=='t'||n=='U'||n=='u')
        {
            sum+=1;
        }
        else if (n=='D'||n=='d'||n=='G'||n=='g') {sum+=2;}
        else if (n=='B'||n=='b'||n=='C'||n=='c'||n=='M'||n=='m'||n=='P'||n=='p')
        {
            sum+=3;
        }
        else if (n=='F'||n=='f'||n=='H'||n=='h'||n=='V'||n=='v'||n=='W'||n=='w'||n=='Y'||n=='y')
        {
            sum+=4;
        }
        else if(n=='K'||n=='k') {sum+=5;}
        else if (n=='J'||n=='j'||n=='X'||n=='x') {sum+=8;}
        else if (n=='Q'||n=='q'||n=='Z'||n=='z') {sum+=10;}
    }
    printf("Scrabble Value:%d\n",sum);

    return 0;
}
