

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,i,j,count=0;

    printf("\n Enter a first number ");
    scanf("%d",&num1);

    printf("\n Enter a second number ");
    scanf("%d",&num2);

    printf("\n The prime number between %d and %d are \n",num1,num2);

    for(i=num1;i<num2;i++)
    {
        count=0;
                       /* printf("\n %d count*",count); =to only understand not for other*/

        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
                                    /*  printf("\n %d count++",count); = to only understand not for other */
            }
        }

       if(count==2)
       {
           printf("%d\t",i);
       }
    }
}
