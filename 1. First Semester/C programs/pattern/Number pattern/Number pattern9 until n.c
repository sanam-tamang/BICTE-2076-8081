
#include<stdio.h>


int main()
{

 int i,j,n;

 printf("Enter a size of task ");
 scanf("%d",&n);

 for(i=1;i<n;i++)
 {
     printf("\n");
     for(j=i;j<n;j++)
     {
         printf("%d",j);
     }
 }

}


/*
Output:
Enter a size of task 7

123456
23456
3456
456
56
6

 */

