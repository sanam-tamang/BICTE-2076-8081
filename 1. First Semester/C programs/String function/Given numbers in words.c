
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n,rev=0,rem=0;
    char *num[]={"Zero","One", "Two", "Three", "Four", "five", "Six", "Seven", "Eight", "Nine" };
    printf("\nEnter a number ");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
       printf("%s",num[rem]);


        n=n/10;
        
    }

    return 0;
}
/*
Output:

*/
