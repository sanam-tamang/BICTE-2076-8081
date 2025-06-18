
#include<stdio.h>

int main()
{
      int i,n,num;


    printf("\n Enter the number to perform task ");

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        num=(i*(i+1)/2);
        printf("%d\t",num);
    }

}

/*
Output:

 Enter the number to perform task 10
0       1       3       6       10      15      21      28      36      45
*/
