
#include<stdio.h>
int main()
{
    int i=2,n;

    printf("\n Enter a number ");
    scanf("%d",&n);

    do
    {
        if(n%i==0)
        {
            printf("The number %d is not a prime number ",n);
            break;
        }
        else if(n%i==2){

            printf("\n The number %d is a prime number ",n);
            break;
        }

        i++;

    }while(i<n);
}
/*
Output:
 Enter a number 15
The number 15 is not a prime number

 Enter a number 29
 The number 29 is a prime number

*/
