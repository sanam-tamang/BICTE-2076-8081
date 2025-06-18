

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,temp,j;


    printf("\n Enter, how many student's information do you want to add ");
    scanf("%d",&n);

    int roll_no[n];

    printf("\n----Enter----");
    for(i=0;i<n;i++)
    {
        printf("\nRoll no: ");
        scanf("%d",&roll_no[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(roll_no[i]>roll_no[j]) /* for descending order it is same as a ascending order
                                         only greater than sign is changed */
            {
                temp=roll_no[i];   /* Swap the value */
                roll_no[i]=roll_no[j];
                roll_no[j]=temp;
            }
        }
    }

    printf("\nRoll no in descending order are \n ");

    for(i=0;i<n;i++)
    {
        printf("Roll No:%d\n",roll_no[i]);
    }

   }
/*
Output:

 Enter, how many student's information do you want to add 5

----Enter----
Roll no: 14

Roll no: 11

Roll no: 21

Roll no: 18

Roll no: 29

Roll no in descending order are
 Roll No:29
Roll No:21
Roll No:18
Roll No:14
Roll No:11


Explain:
Descending order means which number starts from larger to smaller number

suppose I have enter 5
first I beg the size of student's
after then it goes until 5 size

then I add roll no till 5 after then
it goes on ascending order formula
here,
I have to descend roll_no so I put roll_no their
roll_no[i]>roll_no[j] or roll_no[j]<roll_no[i]
 both is same(formula for descending order)

after then swap these value
and get desire output

*/

