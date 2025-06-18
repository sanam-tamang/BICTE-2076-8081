
#include<stdio.h>
int main()
{
    int i,j,n;

    printf("\n Enter the size of task ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\n");

        for(j=1;j<=n;j++)
        {
            printf("%d",j);
        }
    }
}


/*
Output:
 Enter the size of task 5

12345
12345
12345
12345
12345

*/
