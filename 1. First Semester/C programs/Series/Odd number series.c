

/* odd number */


#include<stdio.h>

int main()
{
    int i,n,a=2;

    printf("\n Enter the number to perform a series task ");

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\t",(a*i-1));



    }

    return 0;

}

