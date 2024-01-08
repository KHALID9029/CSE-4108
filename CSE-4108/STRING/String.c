#include<stdio.h>
#include<string.h>
int main()
{
    //declare & access
//    char country[]={'B','a','n','g','l','a','d','e','s','h','\0'}; //remember the null character '\0'
//    printf("%s\n",country);                                        //use of %s //\n ta full string print korar por ekta enter chap dey

//      char country[]={'B','a','n','g','l','a','d','e','s','h',' ','i','s',' ','m','y',' ','h','o','m','e','.','\0'};
//      printf("%s\n",country);
//      //VS
//
//      char co[]={'B','a','n','g','l','a','d','e','s','h','\0','i','s',' ','m','y',' ','h','o','m','e','.','\0'};
//      printf("%s\n",co);                                             //jekhanei \0 dekhbe compiler vabbe oikhanei string shesh


        //LOWER TO UPPER
//        char country[]={'B','a','n','g','l','a','d','e','s','h','\0'};
//        int i,length;
//        printf("%s\n",country);
//        length=10;
//        for(i=0;i<length;i++)
//        {
//            if(country[i]>=97 && country[i]<=122)      //or, country[i]>='a' && country<='z'
//            {
//                country[i]=country[i]-'a'+'A';
//            }
//        }
//        printf("%s\n",country);


          //UPPER TO LOWER
//          char country[]={'B','A','N','G','L','A','D','E','S','H','\0'};
//          int i,length;
//          printf("%s\n",country);
//          length=10;
//          for(i=0;i<length;i++)
//          {
//              if(country[i]>=65 && country[i]<=90)      //or, country[i]>='A' && country<='Z'
//              {
//                  country[i]=country[i]+32;
//              }
//          }
//         printf("%s\n",country);


           //SUBEEN PAGE 127
           char s[1002],word[100];
           int i,j,length,is_word_started;
           gets(s);
           length=strlen(s);
           printf("%d\n",length);
           is_word_started=0;

           for(i=0,j=0;i<=length;i++)
           {
               if (s[i]>='a'&& s[i]<='z')
               {
                   if(is_word_started==0)
                   {
                       is_word_started=1;
                       word[j]='A'+s[i]-'a';         //first character is capital
                       j++;
                   }
                   else
                   {
                       word[j]=s[i];
                       j++;
                   }
               }
               else if(s[i]>='A'&&s[i]<='Z')
               {
                   if(is_word_started==0)
                   {
                       is_word_started=1;
                   }
                   word[j]=s[i];
                   j++;
               }
               else if(s[i]>='0'&& s[i]<='9')
               {
                   if(is_word_started==0)
                   {
                       is_word_started=1;
                   }
                   word[j]=s[i];
               }
               else
               {
                   if (is_word_started==1)
                   {
                       is_word_started=0;
                       word[j]='\0';
                       printf("%s\n",word);
                       j=0;
                   }
               }
           }

    return 0;
}
