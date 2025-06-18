

/* pattern of diamond */

#include<stdio.h>

int main()
{
    int i,j,k,l,n;

    printf("Enter the size of pattern ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=i;j<n;j++)
        {
            printf(" ");

        }
        for(k=1;k<i;k++)
        {
            printf("*");
        }
        for(l=0;l<i;l++)
        {
            printf("*");
        }
    }



 for(i=1;i<n;i++)
 {
     printf("\n");
     for(j=1;j<i;j++)
     {
         printf(" ");
     }

     for(k=i;k<n;k++)
     {
         printf("*");
     }
    for(l=i+1;l<n;l++)
    {
        printf("*");
    }

 }



}

/*
Output:

Enter the size of pattern 10


         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*****************
 ***************
  *************
   ***********
    *********
     *******
      *****
       ***
        *
*/



