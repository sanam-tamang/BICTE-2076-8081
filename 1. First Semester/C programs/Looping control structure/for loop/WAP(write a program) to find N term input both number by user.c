

#include<stdio.h>
int main()
{
    int i,n,sum=0,n1;

    printf("\n Enter a first number ");
    scanf("%d",&n);

     printf("\n Enter a second number number ");
    scanf("%d",&n1);
  printf("\n The number %d to %d shown below \n",n,n1);
    for(i=n;i<=n1;i++)
    {
        sum=sum+i;

        printf("%d\t",i);
    }


    printf("\n\n The numbers sum of above number is %d ",sum);

}
/*
Output:

 Enter a first number 10

 Enter a second number number 15

 The number 10 to 15 shown below
10      11      12      13      14      15

 The numbers sum of above number is 75

 Example:
 n=10
 n1=15

 i is incremented by 10 to 15 total 5 times
 sum=sum+i
 0=0+10
 10=10+11
 21=21+12
 33=33+13
 46=46+14
 60=60+15;
 sum=75

 10+11+12+13+14+15=75

*/

