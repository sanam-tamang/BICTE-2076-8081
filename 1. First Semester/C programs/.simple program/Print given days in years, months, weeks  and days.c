



#include<stdio.h>
#include<conio.h>

void main()
{
    int days1,days,month, year,weeks;


    printf("Enter days ");

    scanf("%d",&days1);

    year=(days1/365);

    month=(days1%365)/30;

    weeks=((days1%365)%30)/7;
    days=((days1%365)%30)%7;

    printf("The %d days of %d year,%d month,%d week,%d days  ",days1,year,month,weeks,days);



}
/*
 Example days1=500

 year=(500/365); year=1

    month=(500%365)/30; month=(500%365)/30=135/30=4

    weeks=((500%365)%30)/7;weeks=((500%365)%30)/7=135%30=15/7=2
    days=((500%365)%30)%7; weeks=((500%365)%30)/7=135%30=15%7=1


    hope that you understand it


*/

