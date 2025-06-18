


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n=10,temp,j;

    int num[n];

    printf("\nEnter number ");
    for(i=0;i<n;i++)
    {

        scanf("%d",&num[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(num[i]>num[j]) /* for descending order */
            {
                temp=num[i];   /* Swap the value */
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
  printf("\n The smallest number is %d ",num[9]);

   }
/*
Output:
Enter number 50
100
300
45
55
65
105
205
55
65

 The smallest number is 45

 Explain:
 In the descending order num[0]=have greatest number and
 num[9]-last number have smallest number number
 (YOu can change value of num[0] and num[9] depends on
  your program how big or small is it)

roll_no[i]>roll_no[j] or roll_no[j]<roll_no[i]
 both is same(formula of descending  order)

after then swap these value
and get desire output

*/

