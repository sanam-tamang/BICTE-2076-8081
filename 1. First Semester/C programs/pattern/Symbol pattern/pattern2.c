

#include<stdio.h>



int main()
{
    int size,i,j,k,l;

    printf("\n Enter the size of task ");

    scanf("%d",&size);





      for(i=size;i>1;i--)
      {
          printf("\n ");
          for(j=size;j>i;j--)
          {
              printf(" ");

       for(l=size;l>j-1;l--)
          {
              printf(" ");

          }
          }
            for(k=i;k>1;k--)
            {
                printf(" * ");
            }


      }



}

/*
output:

Enter the size of task 10

 *  *  *  *  *  *  *  *  *
   *  *  *  *  *  *  *  *
      *  *  *  *  *  *  *
          *  *  *  *  *  *
               *  *  *  *  *
                     *  *  *  *
                            *  *  *
                                    *  *
                                             *

*/
