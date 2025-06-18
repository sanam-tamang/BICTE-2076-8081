#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a positive number ");
    scanf("%d",&num);

    switch(num%2)
    {
 case 0:
    printf("%d is even number ",num);
    break;
 case 1:
    printf("%d is odd number ",num);
    break;
 default:
    printf("Wrong input ");
    break;

    }
}
/*
output:
Enter a positive number 55
55 is odd number

Enter a positive number 64
64 is even number

Explaination:
55%2=1-Odd
64%2=0-Even number

*/
