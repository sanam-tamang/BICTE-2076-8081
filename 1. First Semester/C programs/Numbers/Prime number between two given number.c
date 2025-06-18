

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,i,j,count=0;

    printf("\n Enter a number 1 ");
    scanf("%d",&num1);

    printf("\n Enter a number 2 ");
    scanf("%d",&num2);

    printf("\n The prime number between %d and %d are \n",num1,num2);

    for(i=num1;i<=num2;i++)
    {
        count=0;
   /* printf("\n %d count* ",count);/* =to only understand not for other*/
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
              count++;
       /* printf("\n %d count++ ",count);/* = to only understand not for other
        printf("\n i=%d and j=%d ",i,j);*/
            }
        }

       if(count==2)/*count 2 because prime number is divide by only 1, and
          that number only */
       {
           printf("\n%d\t",i);
       }
    }
    return 0;
}
