
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int row, column;
    printf("\nEnter a size of row ");
    scanf("%d",&row);
    printf("\nEnter a size of column ");
    scanf("%d",&column);

    int a[row][column],b[row][column],i,j,k,l,mult[row][column];
    printf("\nEnter the elements of Matrix 'A' ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("\nEnter the elements of Matrix 'B' ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

   for(i=0;i<row;i++)
   {
       for(j=0;j<column;j++)
       {
           mult[i][j]=0;
           for(k=0;k<row;k++)
           {

                mult[i][j]=mult[i][j]+a[i][k]*b[k][j];

           }
       }

   }

   printf("\nThe Matrix multiplication is \n");
   for(i=0;i<row;i++)
   {
       printf("\n");
       for(j=0;j<column;j++)
       {
           printf("%d\t",mult[i][j]);
       }
   }
   return 0;


}
