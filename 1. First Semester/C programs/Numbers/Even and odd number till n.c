
#include<stdio.h>
int main()
{
    int num,i,temp1;

    printf("\n Enter a number ");
    scanf("%d",&num);

     printf("\n\nEven number are\n");

    for(i=1;i<=num;i++)
    {
        temp1=0;
        temp1=i; /* Store the value of i*/
        if(temp1%2==0)
        {
            printf("%d\t",temp1);
        }
    }

    printf("\n\n Odd number are \n");

    for(i=1;i<=num;i++)
    {
        temp1=0;
        temp1=i;/* Store the value of i*/
        if(temp1%2!=0)
        {
            printf("%d\t",temp1);
        }
    }


}
/*
Output:

 Enter a number 50

Even number are
2       4       6       8       10      12      14      16      18      20      22      24      26
28      30      32      34      36      38      40      42      44      46      48      50

 Odd number are
1       3       5       7       9       11      13      15      17      19      21      23      25
27      29      31      33      35      37      39      41      43      45      47      49
*/
