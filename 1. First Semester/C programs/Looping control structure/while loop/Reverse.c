
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int rev=0,remainder=0,n,temp;

    printf("\n Enter the number to perform reverse of your entered number : ");
    scanf("%d",&n);

temp=n;

    while(n>0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;

    }
    printf("\n The reverse number of %d is %d ",temp,rev);

}





