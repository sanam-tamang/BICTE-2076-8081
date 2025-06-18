


#include<stdio.h>
int main()
{
    int i,j,k,n,l;
    printf("\n Enter size of task  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("\n");

      for(j=i;j<n-1;j++)
      {
          printf(" ");
      }


    for(k=i;k>1;k--)

    {
        printf(" %d ",k);


    for(l=i;l<n;l++)
    {
        printf(" ");
    }

    }
    }



}



/*

Output:


Enter size of task  10

       2
      3         2
     4        3        2
    5       4       3       2
   6      5      4      3      2
  7     6     5     4     3     2
 8    7    6    5    4    3    2
9   8   7   6   5   4   3   2

 */

