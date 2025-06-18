
#include<stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("\nEnter the year to check leap year or not: ");
    scanf("%d",&year);
    
    if( year%100!=0 && year%4==0 || year%400==0 )
    {
        printf("\n%d, year is Leap year ",year);
    }
    else
    {
        printf("\n%d, year is not leap year ",year);
    }
   return 0;
}

