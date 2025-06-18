


#include<stdio.h>

int main()
{
    int a;

    printf("\nEnter three number ");
    scanf("%d",&a);

    if(a<0)
    {
        printf("\n Negative number is  %d ",a);
    }
    else if(a>0)
    {
       printf("\n Positive number is  %d ",a);

    }
    else if(a==0)
    {
        printf("\n Equal number is %d ",a);

    }


    else{
            printf("Wrong input");
    }

    return 0;


}

