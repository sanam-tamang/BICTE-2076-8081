


#include<stdio.h>


int main()
{

 int i,j,n;

 printf("Enter a size of task ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
     printf("\n");
     for(j=0;j<i;j++)
     {
         printf(" * ");
     }
 }

}



/*

Output:

Enter a size of task 10


 *
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *



*/

