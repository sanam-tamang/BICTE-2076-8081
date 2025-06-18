

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b; /* a,b is variable, it is must be declare before it's used */

    printf("\n Enter two numbers ");
    scanf("%d%d",&a,&b);

    printf("The division of %d/%d=%d ",a,b,a/b);
    printf("\nThe remainder of %d%%%d=%d ",a,b,a%b);


    getch();

}

/*
  % is a remainder so it take the extra value of division

suppose I have entered
500/365=1    = division
500%365=135  = remainder

 15/7=2  = division
 15%7=1  = remainder

look at another example: 15/3=5 - division this have have remainder 15%3=0
 which number is divided by another number that have no remainder
 let's do the another example:


 */

