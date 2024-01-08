#include<stdio.h>
#include<string.h>
int main()
{
    char num[20];
    printf("Enter phone number: ");
    gets(num);
    for(int i = 0; i < strlen(num); i++)
    {
         if(num[i] >= 'A' && num[i] <= 'Z')
         {
             if (num[i]=='A'||num[i]=='B'||num[i]=='C') {num[i]='2';}
             else if (num[i]=='D'||num[i]=='E'||num[i]=='F') {num[i]='3';}
             else if (num[i]=='G'||num[i]=='H'||num[i]=='I') {num[i]='4';}
             else if (num[i]=='J'||num[i]=='K'||num[i]=='L') {num[i]='5';}
             else if (num[i]=='M'||num[i]=='N'||num[i]=='O') {num[i]='6';}
             else if (num[i]=='P'||num[i]=='Q'||num[i]=='R'||num[i]=='S') {num[i]='7';}
             else if (num[i]=='T'||num[i]=='U'||num[i]=='V') {num[i]='8';}
             else if (num[i]=='W'||num[i]=='X'||num[i]=='Y'||num[i]=='Z') {num[i]='9';}
         }
    }
puts(num);


    return 0;
}

