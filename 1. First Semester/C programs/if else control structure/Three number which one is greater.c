
#include<stdio.h>

int main()
{
    int a,b,c;

    printf("\nEnter three number ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>b)
    {
        printf("\n The greatest number is %d ",a);
    }
    else if(b>c && b>a)
    {
       printf("\n The greatest number is %d ",b);

    }
    else if(c>b && c>a)
    {
        printf("\n The greatest number is %d ",c);

    }
    else if(a==b && a==c && b==c )
    {

        printf("\n All number are equal and equal number is %d ",a+b-c );/*You can also write one value a or b or c which you like */
    }

    else{
            printf("Wrong input");
    }


}
