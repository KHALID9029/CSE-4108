#include<stdio.h>
int GCD(int x,int y)
{
    if(y!=0) return GCD (y,x%y);
    else return x;

}
void reduce (int numerator,int denominator,int *reduced_numerator,int *reduced_denominator)
{
  if(numerator==0) {*reduced_numerator=0;*reduced_denominator=0;}
  else
  {int a=GCD(numerator,denominator);
  *reduced_numerator=numerator/a;
  *reduced_denominator=denominator/a;}
}
int main()
{
    int nom,dom,rnom,rdom;
    scanf("%d/%d",&nom,&dom);
    reduce(nom,dom,&rnom,&rdom);
    printf("%d/%d",rnom,rdom);


    return 0;
}
