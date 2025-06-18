
#include<stdio.h>
#include<stdlib.h>

int first(int num);
int main()
{
    int n,rev;
    printf("\n Enter the number to perform reverse of your entered number : ");
    scanf("%d",&n);
    rev=first(n);

    printf("\n The reverse number of %d is %d ",n,rev);

}


int first(int num)
{
    int rev=0,remainder=0;

    while(num>0)
    {
        remainder=num%10;
        rev=rev*10+remainder;
        num=num/10;

    }
    return rev;
}

