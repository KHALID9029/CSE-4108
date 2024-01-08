#include<stdio.h>
int main()
{
    int grade;
    printf("Enter Numerical Grade:");
    scanf("%d",&grade);

    switch (grade/10){

    case 10:
     case 9:
        printf("Letter grade:A");
        break;

     case 8:
          printf("Letter grade:B");
          break;

     case 7:
         printf("Letter grade:C");
         break;

     case 6:
          printf("Letter grade:D");
        break;

     case 5:
     case 4:
     case 3:
     case 2:
     case 1:
     case 0:
         printf("Letter grade:F");
        break;

    default:
        printf("Error");

}










    return 0;
}
