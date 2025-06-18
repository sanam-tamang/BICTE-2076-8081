#include<stdio.h>
int main()
{
    int a=5;
    int b=10;
    //%p=%x is same hexa address of value show 

    printf("\nThe value of integer is %d and location is %p ",a,&a);
    printf("\nThe value of character is %d and location is %p ",b,&b);


}
/*
Output:

The value of integer is 5 and location is 0060FF0C
The value of character is 10 and location is 0060FF08

Explaination:
%p is shows the integer and character
to show the address of variable
recently I said &=this sign indicated
the memory address of variable
*/
