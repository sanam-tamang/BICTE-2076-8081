

#include<stdio.h>

int main()
{
    int i,n,a=5,r=2;

    printf("\n Enter a number to perform a Geometric's series task ");

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\t",a);

        a=a*r;

    }

    return 0;

}
/*output:
Enter a number to perform a Geometric's series task 10
5       10      20      40      80      160     320     640     1280    2560

*/
