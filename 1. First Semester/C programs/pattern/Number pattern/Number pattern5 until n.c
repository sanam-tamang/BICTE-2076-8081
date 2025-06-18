

#include<stdio.h>
int main()
{
    int i,j,k,n;

    printf("\n Enter the size of task ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\n");

        for(j=i;j<=n;j++)
        {
            printf("%d",j);
        }
        for(k=n;k>=i;k--)
        {
            printf("%d",k);
        }
        }


    }


/* Output:

 Enter the size of task 5

1234554321
23455432
345543
4554
55

*/

