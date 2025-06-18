
#include<stdio.h>

int main()
{
    int i,n;

    printf("\n Enter multiplication number ");

    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
}
