



/* cube series*/

#include<stdio.h>

int main()
{
    int i,n;

    printf("\n Enter the number to perform a cube's series task ");

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\t",(i*i*i));
    }

    return 0;

}

/*Output:
Enter the number to perform a cube's series task 5
1       8       27      64      125

*/

