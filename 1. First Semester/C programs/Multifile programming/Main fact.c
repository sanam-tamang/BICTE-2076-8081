
#include<stdio.h>
#include<stdlib.h>
#include"facto.h"

int main()
{
    int num;
    int result;
    printf("\nEnter a number to find factorial: ");
    scanf("%d",&num);

    result=fact(num);
    if(result<0)
    {
        printf("\nError, larger number ");
        exit(1);
    }
    printf("\nFactorial of %d = %d ",num,result);
    return 0;
}
