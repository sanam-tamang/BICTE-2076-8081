
//leap year
#include<stdio.h>
#include <conio.h>
int main()
{
    int  year,result;

    printf("\nEnter the year ");
    scanf("%d",&year);
    
  /* (year%100!=0 && year%4==0 || year%400==0)?printf("Is leap year"):printf("Is not leap year");*/

    if( year%100!=0 && year%4==0 || year%400==0 )
    {
        printf("\n %d year is Leap year ",year);
    }
  
    else
    {
        printf("\n %d year is not leap year ",year);
    }
   return 0;
}
