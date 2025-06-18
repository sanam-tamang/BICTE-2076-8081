
#include<stdio.h>

int main()
{
    int i,n,a=2;

    printf("\n Enter the number to perform a arithmetic series task ");

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\t",i);
           
        i=i+a;

    }

    return 0;

}

/*Output:
Enter the number to perform a arithmetic series task 10
1       4       7       10
The distance between one to another value is 3 so 
we should maintain each and every variable distance 
should be 3
if i is 1 and i=1+2=3 
and i is incremented by 1 in for loop so value gets
change into 4 and it's printed by compiler
*/