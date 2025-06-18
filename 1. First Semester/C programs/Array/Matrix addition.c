/* Matrix addition */

#include<stdio.h>
int main()
{
    int n;

    printf("\n Enter the size of your task ");

    scanf("%d",&n);

    int a[n][n],b[n][n],sum[n][n],i,j;

    printf("\n Enter the size of Matrix 'A' ");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    printf("\n Enter the size of matrix 'B' ");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\n The sum of matrices A and B is  ");

    for(i=0;i<n;i++)
    {
          printf("\n");

        for(j=0;j<n;j++)
        {
            printf("%d\t",sum[i][j]);
        }

    }
}
/*
Output:
 Enter the size of your task 3

 Enter the size of Matrix 'A' 1
2
3
4
5
6
7
8
9

 Enter the size of matrix 'B' 9
8
7


6
5
4
3
2
1

 The sum of matrices A and B is
10      10      10
10      10      10
10      10      10
*/


