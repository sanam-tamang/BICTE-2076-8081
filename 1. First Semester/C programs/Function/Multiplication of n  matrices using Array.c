
 /* Mult of matrix using array with fuction.c */
#include<stdio.h>
#include<stdlib.h>

int matrix(int a[][1],int n,int b[][1]);

int main()
{

    int size;

    printf("\nEnter the size of array ");
    scanf("%d",&size);

    int a[size][size],b[size][size],i,j;

    printf("\n Enter the element of matrix 'A' ");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n Enter the element of matrix 'B' ");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    matrix(a,size,b);
    return 0;

}



int matrix(int a[][1],int n,int b[][1])
{

    int i,j,k;
int mult[n][n]; /* mult value to remember that value */


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            mult[i][j]=0;
            for(k=0;k<n;k++)
            {
                mult[i][j]=mult[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("\n The multiplication of matrix A & B is given below ");

    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",mult[i][j]);
        }
    }


}

