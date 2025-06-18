
#include<stdio.h>
int main()
{
    int p,n,r,si;
    printf("\n Enter principle ");
    scanf("%d",&p);

     printf("\n Enter number(time) ");
    scanf("%d",&n);

     printf("\n Enter rate ");
    scanf("%d",&r);

    si=(p*n*r)/100;

    printf("\nThe Interest is %d ",si);

}
/*
Output:

 Enter principle 50000

 Enter number(time) 1

 Enter rate 14

The Interest is 7000

*/
