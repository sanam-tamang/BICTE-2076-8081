
#include<stdio.h>


int main()
{

 int i,j,n;

 printf("Enter a size of task ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
     printf("\n");
     for(j=i;j<n;j++) /* First time i=0 n<10 so * printed 9 times
                        in second i=1 n<10 so * printed 8 times
                        in third i=2 n<10 so * printed 7 times
                        and so on */
     {
         printf(" * ");
     }
 }

}


/*
Output:

Enter a size of task 10

 *  *  *  *  *  *  *  *  *  *
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
