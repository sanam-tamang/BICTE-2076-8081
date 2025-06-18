
/* Pattern like /\ shape.c*/



#include<stdio.h>

int main()
{
    int  i,j,k,l,m,n;
printf("Enter the size of pattern ");s
scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\n");

        for(j=i;j<n;j++)
        {
            printf("*");
        }
        for(k=2;k<i;k++)
        {
            printf(" ");
        }
        for(l=2;l<i;l++)
        {
        printf(" ");
        }
        for(m=i;m<n;m++)
        {
            printf("*");
        }

    }
}


/*
Output:

Enter the size of patter 10

******************
****************
*******  *******
******    ******
*****      *****
****        ****
***          ***
**            **
*              *

*/
