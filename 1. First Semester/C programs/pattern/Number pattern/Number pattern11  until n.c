
/* Pattern like /\ shape.c*/



#include<stdio.h>

int main()
{
    int  i,j,k,l,m,n;
printf("Enter the size of patter ");
scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        printf("\n");

        for(j=i;j<n;j++)
        {
            printf("%d",j);
        }
        for(k=2;k<i;k++)
        {
            printf(" ");
        }
        for(l=2;l<i;l++)
        {
        printf(" ");
        }
        for(m=i;m<n;m++)
        {
            printf("%d",m);
        }

    }
}


/*
Output:

Enter the size of patter 10

123456789123456789
2345678923456789
3456789  3456789
456789    456789
56789      56789
6789        6789
789          789
89            89
9              9

*/
