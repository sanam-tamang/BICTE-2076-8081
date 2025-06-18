

#include<stdio.h>
#include<conio.h>

int main()
{
    int num;

    printf("\n Enter a number to know even or odd number ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("\n  %d is Even number ",num);

    }

    else if(num%2!=0)
    {
        printf("\n %d is odd number ",num);

    }

    else
    {
        printf("\n Wrong input ");
    }
}
