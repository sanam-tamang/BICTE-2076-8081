
#include<stdio.h>

int main()

{
    int age;

    printf("\n Enter your age ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("\n You are eligible for the vote ");
    }

    else if(age<18)
    {
        printf("\n You are not eligible for the vote ");
    }

    else
    {
    printf("\n Wrong input ");
    }

}
