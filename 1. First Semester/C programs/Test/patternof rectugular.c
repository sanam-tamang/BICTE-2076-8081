
#include<stdio.h>
#include<stdio.h>
int main()
{ char para[10];
    int i,j,n=32;
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            if(i==0 ||  i==n-1   )
            {
                printf("-_");
            }
            else if(j==n/2 && i<=6)
            {
                printf("  ");

            }

            else if(j==0 || j==n-1 || j==n/2 )
            {
               printf("||");
            }
            else if(i==n/5 )
            {
               printf("__");

            }

        else
            {
                printf("  ");
            }
        }
    }
}
