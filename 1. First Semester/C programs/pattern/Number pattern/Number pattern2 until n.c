
#include<stdio.h>
int main()
{
    int i,j,n;

    printf("\n Enter the size of task ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        printf("\n");

        for(j=5;j>=1;j--)
        {
            printf("%d",j);
        }
    }
}

/* output:
 Enter the size of task 5

54321
54321
54321
54321
54321

*/
