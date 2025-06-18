
#include<stdio.h>
int main()
{
    int size,i,j;
    printf("\nEnter the size of matrix ");
    scanf("%d",&size);

    int a[size][size];

    printf("\nEnter the value of matrix ");
    for(i=0;i<size;i++)
    {
    for(j=0;j<size;j++)
    {
    scanf("%d",&a[i][j]);
    }
    }
    printf("\nThe matrix is given ");
    for(i=0;i<size;i++)
    {
        printf("\n");
        for(j=0;j<size;j++)
        {
           printf("%d\t",a[i][j]);
        }
    }

    printf("\n\nThe transpose of matrix is ");

    for(i=0;i<size;i++)
    {printf("\n");
        for(j=0;j<size;j++)
        {
           printf("%d\t",a[j][i]);/*change i in j and j in i*/
        }
    }


}
/*
Output:
Enter the size of matrix 2

Enter the value of matrix 1
2
3
4

The matrix is given
1       2
3       4

The transpose of matrix is
1       3
2       4
*/
