
#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("\n Enter a number ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;

        printf("%d\t",i);
    }


    printf("\n The numbers sum of above number is %d ",sum);

}
/*
Output:

 Enter a number 5
1       2       3       4       5
 The numbers sum of above number is 15

 Example:
 n=5;
 i is incremented by 1 to 5
 sum=sum+i;
 0=0+1;
 1=1+2;
 3=3+3;
 6=6+4;
 10=10+5;
 sum=15;

 1+2+3+4+5=15

*/
