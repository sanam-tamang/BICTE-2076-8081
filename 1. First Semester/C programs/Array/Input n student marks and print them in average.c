
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,ave,total=0;

    printf("\n Enter, how many student's information do you want to add ");
    scanf("%d",&n);

   printf("\n Enter ");
    int a[n];
    for(i=0;i<n;i++)
    {
       printf(" %d student's marks ",i+1); /* value of i is incremented 0 from starts to make 1 I add 1*/
        scanf("%d",&a[i]);

    if(a[i]>100) /* if one value entered more than hundred then this function is executed */
        {
        printf("\nSorry,wrong input marks because one student's marks can not be more than hundreds ");
        printf("\n Your marks need to be less than hundred ");
        printf("\n Your entered marks is %d ",a[i]);

        exit(0);

    }

    }
    for(i=0;i<n;i++)
    {
      total=total+a[i];
    }
    ave=total/n; /* formula of average value */
    printf("\n\nEntered number are ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);  /* To see the entered number */
    }
    printf("\n The total number is %d ",total); /* Sum of total entered number */

    printf("\n\nThe average number is %d ",ave);
   }


/*
Output:

 Enter, how many student's information do you want to add
10

 Enter  1 student's marks 80
 2 student's marks 85
 3 student's marks 101

Sorry,wrong input marks because one student's marks can not be more than hundreds
 Your marks need to be less than hundred
 Your entered marks is 101

Next output:

 Enter, how many student's information do you want to add 5

 Enter  1 student's marks 85
 2 student's marks 95
 3 student's marks 50
 4 student's marks 40
 5 student's marks 86


Entered number are 85   95      50      40      86
 The total number is 356

The average number is 71

*/
