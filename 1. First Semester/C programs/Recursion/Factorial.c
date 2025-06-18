#include<stdio.h>
int factorial(int);

int main()
{

int num,fact;

    printf("\nEnter a number to perform factorial ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("\n The factorial of %d is %d ",num,fact);
}

int factorial(int n)
{

    if(n==1)
    {
        return 1;

    }
    else
    {

    return (n*factorial(n-1));

    }
}
/*
Output:
Enter a number to perform factorial 5

 The factorial of 5 is 120

Explaination:
Recursion is calling itself
Recursion is like the loops
n=5;
In simple form 5*4*3*2*1=120


*/
