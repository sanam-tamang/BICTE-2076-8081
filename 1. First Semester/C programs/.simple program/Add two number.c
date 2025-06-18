

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b; /* a,b is variable, it is must be declare before it's used */

    printf("\n Enter two numbers ");
    scanf("%d%d",&a,&b);/*it is used for taking input from the
                        keyboard */

    printf("The sum of %d+%d=%d ",a,b,a+b);

    getch();

}
/*
Output:
 Enter two numbers 5+5
The sum of 5+5=10

*/
