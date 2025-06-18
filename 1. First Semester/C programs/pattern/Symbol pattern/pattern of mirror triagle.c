




#include<stdio.h>


int main()
{

 int i,j,k,l,n;

 printf("Enter a size of task ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
     printf("\n ");
     for(j=0;j<i;j++)
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

Enter a size of task 8

 ***************
  *************
   ***********
    *********
     *******
      *****
       ***
        *

*/


