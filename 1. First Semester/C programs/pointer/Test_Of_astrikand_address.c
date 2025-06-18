
//test of astrik  and & ampertent 

#include <stdio.h>
#include <conio.h>

int main()
{
    int *a;
    int b=10;
     a=&b;// we can not do a=b because pointer directly cannot access the value of another so we need to take a 
     //address of another variable to pointer

     printf("\nThe value of a is %d ",a);//print address *a->then it prints the value of b 

}