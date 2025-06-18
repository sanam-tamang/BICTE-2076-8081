
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,rem,sum=0,temp1,i,temp2;

    printf("Enter a number ");
    scanf("%d",&num);

 printf("Armstrong number are \n ");
 for(i=1;i<=num;i++)
 {
  sum=0;
  temp1=i;
  temp2=i;
    while(temp1>0)
    {
        rem=temp1%10;
        sum=sum+rem*rem*rem;
        temp1=temp1/10;

    }
   if(sum==temp2)
   {
       printf("\n %d ",sum);
   }

 }

}
/*
Output:
Enter a number 500
Armstrong number are

 1
 153
 370
 371
 407

 Explaination:

 */
