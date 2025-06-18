

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n=10,temp,j;


    printf("\n Enter size of the task ");
    scanf("%d",&n);
    int num[n];
    printf("\n---Enter numbers--- ");
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

  printf("\n The greatest number is %d ",num[n-1]); /* last value is greater in ascending order */
  printf("\n Smallest number is %d ",num[0]);    /* first value is smaller in ascending order*/

   }
/*
Output:

 Enter size of the task 15

---Enter numbers--- 15
15
14
16
17
1
2
3
4
5
6
7
8
10
9

 The greatest number is 17
 Smallest number is 1

 Explain:

In the greater value n-1 that's why
array value starts with 0 and end in n-1 form



*/
