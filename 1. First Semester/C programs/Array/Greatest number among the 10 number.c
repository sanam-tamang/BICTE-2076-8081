

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
            if(num[i]<num[j]) /* for ascending order */
            {
                temp=num[i];   /* Swap the value */
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
  printf("\n The greatest number is %d ",num[9]);

   }
/*
Output:

Enter number 105
115
205
195
25
35
155
365
165
255

 The greatest number is 365

 Explain:
 In the ascending order num[0]=have smallest number and
 num[9]-last number have greatest number

roll_no[i]<roll_no[j] or roll_no[j]>roll_no[i]
 both is same(formula for ascending order)

after then swap these value
and get desire output

*/
