
#include<stdio.h>
#include<conio.h>
int size;
void matrix(int a[size][size] ,int b[size][size] );
int main()
{

    printf("\nEnter the size of Matrix ");
    scanf("%d",&size);

    int a[size][size],b[size][size],mult[size][size],i,j;
    /*Matrix A starts */
    printf("\nEnter the value of matrix A ");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    /*Matrix B starts */
    printf("\nEnter the value of Matrix B ");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    matrix(a,b);


    return 0;

}

void matrix(int a[][size],int b[][size])
{  int i,j,**mult[size][size];
   printf("\nThe size is %d ",size);
     for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            mult[i][j]=0;
            for(int k=0;k<size;k++)
            {
               mult[i][j]=mult[i][j]+a[i][j]*b[k][j];/*this kinds of value
               does not return any kinds of value to return I think it
               must be pointer  */
            }
        }
    }
    printf("\nThe multiplication of matrix A and B are \n ");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",mult[i][j]);
        }
        printf("\n");
    }
    return;

}
