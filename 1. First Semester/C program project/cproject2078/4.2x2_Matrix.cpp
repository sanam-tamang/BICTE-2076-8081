
//4.sum of matrix 2x2
/* Matrix addition */

#include<stdio.h>
int main()
{
    int n=2;
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
