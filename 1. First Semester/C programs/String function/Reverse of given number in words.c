
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n,rev;
    char *num[]={"Zero","One", "Two", "Three", "Four", "five", "Six", "Seven", "Eight", "Nine" };
    printf("\nEnter a number ");
    scanf("%d",&n);
    printf("\nThe reverse number of %d is in words is:\n",n);
    while(n>0)
    {
        rev=n%10;
        printf("%s ",num[rev]);
        n=n/10;

    }
    return 0;
}
/*
Output:
The reverse number of 123450 is in words is:
Zero five Four Three Two One
*/
