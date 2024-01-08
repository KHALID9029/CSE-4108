#include<stdio.h>
int main(void)
{
   // nested loop
    int i,j,k;
    for (i=1;i<=2;i++)
    {
        printf("KHALID\n");
        for (j=1;j<=3;j++)
        {
            printf("HASAN\n");
            for (k=1;k<=5;k++)
            {
                printf("ADOR\n");
            }
        }
    }


////define macros
//#include<stdio.h>
//#include<string.h>
//#define KHA "KHALID HASAN ADOR"
//int main()
//{
//    printf("%s",KHA);
//    return 0;
//}


//chapter 07
//float x=10.555;
//printf("%e\n",x);
//printf("%g",x);

//int x=10;
//printf("%x\n",x);
//printf("%o",x);

//CHAPTER-08-Array
//int n,i,ara[100];
//scanf("%d",&n);
//for(i=0;i<n;i++)
//{
//    scanf("%d",&ara[i]);
//}
//printf("%d %d %d %d %d",ara[0],ara[1],ara[2],ara[3],ara[4]);


//int a[5]={0},i=0;
//for(;i<5;)
//{
//    printf("%d",a[i++]);  //5 bar 0 print korbe.
//}

//multidimensional array
//int a[10]={0,1,2,3,4,5,6,7,8,9};
//int b[10]={0,1,2,3,4,5,6,7,8,9};
//for(int i=0;i<10;i++)
//{
//    printf("%d %d\n",&a[i],b[i]);
//}




return 0;
}
