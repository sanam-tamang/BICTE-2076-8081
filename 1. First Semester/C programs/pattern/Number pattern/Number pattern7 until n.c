



#include<stdio.h>


int main()
{

 int i,j,k,n;

 printf("Enter a size of task ");
 scanf("%d",&n);

 for(i=1;i<n;i++)
 {
     printf("\n");
     for(j=1;j<i;j++)
     {
         printf(" ");
     }

     for(k=i;k<n;k++)
     {
         printf("%d",k);
     }

 }

}


/*

Output:
Enter a size of task 6

12345
 2345
  345
   45
    5

*/

