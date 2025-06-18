
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,rem,sum=0,temp;

    printf("Enter a number ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }

   if(sum==temp)
   {
       printf("\n %d is Armstrong number ",temp);
   }
   else
   {
       printf("%d is not Armstrong number ",temp);
   }

}
/*
Output:
Enter a number 153

 153 is Armstrong number

 Explaination:
  sum=sum+rem*rem*rem;
 first number 0=0+3*3*3=27
 second number 27=27+5*5*5=152
 Third one is 152=152+1*1*1=153

 if num==sum is same that is Armstrong number

    why temp is used after while num will be
    zero so instead of num we use temp to store num
    value

 */
