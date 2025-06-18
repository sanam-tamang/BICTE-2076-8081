

/* Matrix multiplication */

#include<stdio.h>
int main()
{
    int n;

    printf("\n Enter the size of your task ");

    scanf("%d",&n);

    int a[n][n],b[n][n],mult[n][n],i,j,k;

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
            mult[i][j]=0;

            for(k=0;k<n;k++)
            {

            mult[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    printf("\n The sum of matrices A and B is  ");

    for(i=0;i<n;i++)
    {
          printf("\n");

        for(j=0;j<n;j++)
        {
            printf("%d\t",mult[i][j]);
        }

    }

    return 0;

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

 Enter the size of matrix 'B' 1
2
3
4
5
6
7
8
9

 The sum of matrices A and B is
30      36      42
66      81      96
102     126     150
*/



